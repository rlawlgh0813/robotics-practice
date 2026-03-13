# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smart_shop_interfaces:msg/OrderLog.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OrderLog(type):
    """Metaclass of message 'OrderLog'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('smart_shop_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'smart_shop_interfaces.msg.OrderLog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__order_log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__order_log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__order_log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__order_log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__order_log

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OrderLog(metaclass=Metaclass_OrderLog):
    """Message class 'OrderLog'."""

    __slots__ = [
        '_order_id',
        '_item_id',
        '_quantity',
        '_amount',
        '_success',
        '_status',
        '_detail',
        '_timestamp',
    ]

    _fields_and_field_types = {
        'order_id': 'string',
        'item_id': 'string',
        'quantity': 'int32',
        'amount': 'int32',
        'success': 'boolean',
        'status': 'string',
        'detail': 'string',
        'timestamp': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.order_id = kwargs.get('order_id', str())
        self.item_id = kwargs.get('item_id', str())
        self.quantity = kwargs.get('quantity', int())
        self.amount = kwargs.get('amount', int())
        self.success = kwargs.get('success', bool())
        self.status = kwargs.get('status', str())
        self.detail = kwargs.get('detail', str())
        self.timestamp = kwargs.get('timestamp', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.order_id != other.order_id:
            return False
        if self.item_id != other.item_id:
            return False
        if self.quantity != other.quantity:
            return False
        if self.amount != other.amount:
            return False
        if self.success != other.success:
            return False
        if self.status != other.status:
            return False
        if self.detail != other.detail:
            return False
        if self.timestamp != other.timestamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def order_id(self):
        """Message field 'order_id'."""
        return self._order_id

    @order_id.setter
    def order_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'order_id' field must be of type 'str'"
        self._order_id = value

    @builtins.property
    def item_id(self):
        """Message field 'item_id'."""
        return self._item_id

    @item_id.setter
    def item_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'item_id' field must be of type 'str'"
        self._item_id = value

    @builtins.property
    def quantity(self):
        """Message field 'quantity'."""
        return self._quantity

    @quantity.setter
    def quantity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quantity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'quantity' field must be an integer in [-2147483648, 2147483647]"
        self._quantity = value

    @builtins.property
    def amount(self):
        """Message field 'amount'."""
        return self._amount

    @amount.setter
    def amount(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'amount' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'amount' field must be an integer in [-2147483648, 2147483647]"
        self._amount = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @builtins.property
    def detail(self):
        """Message field 'detail'."""
        return self._detail

    @detail.setter
    def detail(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'detail' field must be of type 'str'"
        self._detail = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'timestamp' field must be of type 'str'"
        self._timestamp = value
