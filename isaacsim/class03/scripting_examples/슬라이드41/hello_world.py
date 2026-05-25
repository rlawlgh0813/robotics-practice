from isaacsim.examples.interactive.base_sample import BaseSample

# Note: checkout the required tutorials at https://docs.isaacsim.omniverse.nvidia.com/latest/index.html
import numpy as np
from isaacsim.core.api.objects import DynamicCuboid

class HelloWorld(BaseSample):
    def __init__(self) -> None:
        super().__init__()
        return

    def setup_scene(self):

        world = self.get_world()
        world.scene.add_default_ground_plane()
        fancy_cube = world.scene.add(
        DynamicCuboid(
            prim_path="/World/random_cube", # The prim path of the cube in the USD stage
            name="fancy_cube", # The unique name used to retrieve the object from the scene later on
            position=np.array([0, 0, 1.0]), # Using the current stage units which is in meters by default.
            scale=np.array([0.5015, 0.5015, 0.5015]), # most arguments accept mainly numpy arrays.
            color=np.array([0, 0, 1.0]), # RGB channels, going from 0-1
        ))
        return

    async def setup_post_load(self):
        self._world = self.get_world()
        self._cube = self._world.scene.get_object("fancy_cube")
        position, orientation = self._cube.get_world_pose()
        linear_velocity = self._cube.get_linear_velocity()
        # will be shown on terminal
        print("Cube position is : " + str(position))
        print("Cube's orientation is : " + str(orientation))
        print("Cube's linear velocity is : " + str(linear_velocity))
        return


    async def setup_pre_reset(self):
        return

    async def setup_post_reset(self):
        return

    def world_cleanup(self):
        return
