# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smart_shop_interfaces:srv/DiscountApply.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiscountApply_Request(type):
    """Metaclass of message 'DiscountApply_Request'."""

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
                'smart_shop_interfaces.srv.DiscountApply_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__discount_apply__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__discount_apply__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__discount_apply__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__discount_apply__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__discount_apply__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DiscountApply_Request(metaclass=Metaclass_DiscountApply_Request):
    """Message class 'DiscountApply_Request'."""

    __slots__ = [
        '_item_id',
        '_original_amount',
    ]

    _fields_and_field_types = {
        'item_id': 'string',
        'original_amount': 'int32',
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
        self.original_amount = kwargs.get('original_amount', int())

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
        if self.original_amount != other.original_amount:
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
    def original_amount(self):
        """Message field 'original_amount'."""
        return self._original_amount

    @original_amount.setter
    def original_amount(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'original_amount' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'original_amount' field must be an integer in [-2147483648, 2147483647]"
        self._original_amount = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DiscountApply_Response(type):
    """Metaclass of message 'DiscountApply_Response'."""

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
                'smart_shop_interfaces.srv.DiscountApply_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__discount_apply__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__discount_apply__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__discount_apply__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__discount_apply__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__discount_apply__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DiscountApply_Response(metaclass=Metaclass_DiscountApply_Response):
    """Message class 'DiscountApply_Response'."""

    __slots__ = [
        '_discounted_amount',
        '_discount_rate',
        '_reason',
    ]

    _fields_and_field_types = {
        'discounted_amount': 'int32',
        'discount_rate': 'int32',
        'reason': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.discounted_amount = kwargs.get('discounted_amount', int())
        self.discount_rate = kwargs.get('discount_rate', int())
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
        if self.discounted_amount != other.discounted_amount:
            return False
        if self.discount_rate != other.discount_rate:
            return False
        if self.reason != other.reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def discounted_amount(self):
        """Message field 'discounted_amount'."""
        return self._discounted_amount

    @discounted_amount.setter
    def discounted_amount(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'discounted_amount' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'discounted_amount' field must be an integer in [-2147483648, 2147483647]"
        self._discounted_amount = value

    @builtins.property
    def discount_rate(self):
        """Message field 'discount_rate'."""
        return self._discount_rate

    @discount_rate.setter
    def discount_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'discount_rate' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'discount_rate' field must be an integer in [-2147483648, 2147483647]"
        self._discount_rate = value

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


class Metaclass_DiscountApply(type):
    """Metaclass of service 'DiscountApply'."""

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
                'smart_shop_interfaces.srv.DiscountApply')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__discount_apply

            from smart_shop_interfaces.srv import _discount_apply
            if _discount_apply.Metaclass_DiscountApply_Request._TYPE_SUPPORT is None:
                _discount_apply.Metaclass_DiscountApply_Request.__import_type_support__()
            if _discount_apply.Metaclass_DiscountApply_Response._TYPE_SUPPORT is None:
                _discount_apply.Metaclass_DiscountApply_Response.__import_type_support__()


class DiscountApply(metaclass=Metaclass_DiscountApply):
    from smart_shop_interfaces.srv._discount_apply import DiscountApply_Request as Request
    from smart_shop_interfaces.srv._discount_apply import DiscountApply_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
