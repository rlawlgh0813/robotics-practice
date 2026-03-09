# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smart_shop_interfaces:srv/CheckStock.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CheckStock_Request(type):
    """Metaclass of message 'CheckStock_Request'."""

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
                'smart_shop_interfaces.srv.CheckStock_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__check_stock__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__check_stock__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__check_stock__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__check_stock__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__check_stock__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CheckStock_Request(metaclass=Metaclass_CheckStock_Request):
    """Message class 'CheckStock_Request'."""

    __slots__ = [
        '_item_id',
        '_quantity',
    ]

    _fields_and_field_types = {
        'item_id': 'string',
        'quantity': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.item_id = kwargs.get('item_id', str())
        self.quantity = kwargs.get('quantity', int())

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
        if self.item_id != other.item_id:
            return False
        if self.quantity != other.quantity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CheckStock_Response(type):
    """Metaclass of message 'CheckStock_Response'."""

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
                'smart_shop_interfaces.srv.CheckStock_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__check_stock__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__check_stock__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__check_stock__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__check_stock__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__check_stock__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CheckStock_Response(metaclass=Metaclass_CheckStock_Response):
    """Message class 'CheckStock_Response'."""

    __slots__ = [
        '_available',
        '_remaining',
        '_reason',
    ]

    _fields_and_field_types = {
        'available': 'boolean',
        'remaining': 'int32',
        'reason': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.available = kwargs.get('available', bool())
        self.remaining = kwargs.get('remaining', int())
        self.reason = kwargs.get('reason', str())

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
        if self.available != other.available:
            return False
        if self.remaining != other.remaining:
            return False
        if self.reason != other.reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def available(self):
        """Message field 'available'."""
        return self._available

    @available.setter
    def available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'available' field must be of type 'bool'"
        self._available = value

    @builtins.property
    def remaining(self):
        """Message field 'remaining'."""
        return self._remaining

    @remaining.setter
    def remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'remaining' field must be an integer in [-2147483648, 2147483647]"
        self._remaining = value

    @builtins.property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value


class Metaclass_CheckStock(type):
    """Metaclass of service 'CheckStock'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('smart_shop_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'smart_shop_interfaces.srv.CheckStock')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__check_stock

            from smart_shop_interfaces.srv import _check_stock
            if _check_stock.Metaclass_CheckStock_Request._TYPE_SUPPORT is None:
                _check_stock.Metaclass_CheckStock_Request.__import_type_support__()
            if _check_stock.Metaclass_CheckStock_Response._TYPE_SUPPORT is None:
                _check_stock.Metaclass_CheckStock_Response.__import_type_support__()


class CheckStock(metaclass=Metaclass_CheckStock):
    from smart_shop_interfaces.srv._check_stock import CheckStock_Request as Request
    from smart_shop_interfaces.srv._check_stock import CheckStock_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
