from isaacsim.examples.interactive.base_sample import BaseSample
from isaacsim.robot.manipulators.examples.franka import Franka
from isaacsim.core.api.objects import DynamicCuboid
import numpy as np
from isaacsim.robot.manipulators.examples.franka.controllers import PickPlaceController
from isaacsim.core.api.tasks import BaseTask


class FrankaPlaying(BaseTask):
    def __init__(self, name):
        super().__init__(name=name, offset=None)
        self._goal_position = np.array([-0.3, -0.3, 0.0515 / 2.0])
        self._task_achieved = False
        return

    def set_up_scene(self, scene):
        super().set_up_scene(scene)
        scene.add_default_ground_plane()
        self._cube = scene.add(DynamicCuboid(
            prim_path="/World/random_cube",
            name="fancy_cube",
            position=np.array([0.5, 0.5, 0.5]),
            scale=np.array([0.7, 0.0515, 0.0515]),
            color=np.array([0, 0, 1.0])
        ))
        self._franka = scene.add(Franka(
            prim_path="/World/Fancy_Franka",
            name="fancy_franka"
        ))
        return

    def get_observations(self):
        cube_position, _ = self._cube.get_world_pose()
        current_joint_positions = self._franka.get_joint_positions()
        observations = {
            self._franka.name: {
                "joint_positions": current_joint_positions,
            },
            self._cube.name: {
                "position": cube_position,
                "goal_position": self._goal_position
            }
        }
        return observations

    def pre_step(self, control_index, simulation_time):
        cube_position, _ = self._cube.get_world_pose()
        if not self._task_achieved and np.mean(np.abs(self._goal_position - cube_position)) < 0.02:
            self._cube.get_applied_visual_material().set_color(color=np.array([0, 1.0, 0]))
            self._task_achieved = True
        return

    def get_params(self):
        params_representation = dict()
        params_representation["robot_name"] = {"value": self._franka.name, "modifiable": False}
        params_representation["cube_name"] = {"value": self._cube.name, "modifiable": False}
        return params_representation

    def post_reset(self):
        self._franka.gripper.set_joint_positions(self._franka.gripper.joint_opened_positions)
        self._cube.get_applied_visual_material().set_color(color=np.array([0, 0, 1.0]))
        self._task_achieved = False
        return


class Manipulator(BaseSample):
    def __init__(self) -> None:
        super().__init__()
        self._controller = None
        self._task = None
        return

    def setup_scene(self):
        world = self.get_world()
        self._task = FrankaPlaying(name="my_first_task")
        world.add_task(self._task)
        return

    async def setup_post_load(self):
        self._world = self.get_world()
        task_params = self._world.get_task("my_first_task").get_params()
        franka_name = task_params["robot_name"]["value"]
        cube_name = task_params["cube_name"]["value"]
        self._franka = self._world.scene.get_object(franka_name)
        self._cube = self._world.scene.get_object(cube_name)

        self._controller = PickPlaceController(
            name="pick_place_controller",
            gripper=self._franka.gripper,
            robot_articulation=self._franka,
        )
        self._world.add_physics_callback("sim_step", callback_fn=self.physics_step)
        await self._world.play_async()
        return

    async def setup_pre_reset(self):
        self._world.remove_physics_callback("sim_step")
        return

    async def setup_post_reset(self):
        self._controller.reset()
        self._world.add_physics_callback("sim_step", callback_fn=self.physics_step)
        await self._world.play_async()
        return

    def physics_step(self, step_size):
        current_observations = self._world.get_observations()
        franka_obs = current_observations["fancy_franka"]
        cube_obs = current_observations["fancy_cube"]

        actions = self._controller.forward(
            picking_position=cube_obs["position"],
            placing_position=cube_obs["goal_position"],
            current_joint_positions=franka_obs["joint_positions"],
        )
        self._franka.apply_action(actions)

        if self._controller.is_done():
            self._world.pause()
        return
