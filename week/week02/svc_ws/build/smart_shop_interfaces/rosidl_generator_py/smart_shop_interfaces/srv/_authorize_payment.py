# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smart_shop_interfaces:srv/AuthorizePayment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AuthorizePayment_Request(type):
    """Metaclass of message 'AuthorizePayment_Request'."""

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
                'smart_shop_interfaces.srv.AuthorizePayment_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__authorize_payment__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__authorize_payment__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__authorize_payment__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__authorize_payment__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__authorize_payment__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AuthorizePayment_Request(metaclass=Metaclass_AuthorizePayment_Request):
    """Message class 'AuthorizePayment_Request'."""

    __slots__ = [
        '_order_id',
        '_amount',
        '_currency',
    ]

    _fields_and_field_types = {
        'order_id': 'string',
        'amount': 'int32',
        'currency': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.order_id = kwargs.get('order_id', str())
        self.amount = kwargs.get('amount', int())
        self.currency = kwargs.get('currency', str())

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
        if self.amount != other.amount:
            return False
        if self.currency != other.currency:
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
    def currency(self):
        """Message field 'currency'."""
        return self._currency

    @currency.setter
    def currency(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'currency' field must be of type 'str'"
        self._currency = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AuthorizePayment_Response(type):
    """Metaclass of message 'AuthorizePayment_Response'."""

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
                'smart_shop_interfaces.srv.AuthorizePayment_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__authorize_payment__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__authorize_payment__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__authorize_payment__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__authorize_payment__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__authorize_payment__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AuthorizePayment_Response(metaclass=Metaclass_AuthorizePayment_Response):
    """Message class 'AuthorizePayment_Response'."""

    __slots__ = [
        '_approved',
        '_auth_code',
        '_reason',
    ]

    _fields_and_field_types = {
        'approved': 'boolean',
        'auth_code': 'string',
        'reason': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.approved = kwargs.get('approved', bool())
        self.auth_code = kwargs.get('auth_code', str())
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
        if self.approved != other.approved:
            return False
        if self.auth_code != other.auth_code:
            return False
        if self.reason != other.reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def approved(self):
        """Message field 'approved'."""
        return self._approved

    @approved.setter
    def approved(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'approved' field must be of type 'bool'"
        self._approved = value

    @builtins.property
    def auth_code(self):
        """Message field 'auth_code'."""
        return self._auth_code

    @auth_code.setter
    def auth_code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'auth_code' field must be of type 'str'"
        self._auth_code = value

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


class Metaclass_AuthorizePayment(type):
    """Metaclass of service 'AuthorizePayment'."""

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
                'smart_shop_interfaces.srv.AuthorizePayment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__authorize_payment

            from smart_shop_interfaces.srv import _authorize_payment
            if _authorize_payment.Metaclass_AuthorizePayment_Request._TYPE_SUPPORT is None:
                _authorize_payment.Metaclass_AuthorizePayment_Request.__import_type_support__()
            if _authorize_payment.Metaclass_AuthorizePayment_Response._TYPE_SUPPORT is None:
                _authorize_payment.Metaclass_AuthorizePayment_Response.__import_type_support__()


class AuthorizePayment(metaclass=Metaclass_AuthorizePayment):
    from smart_shop_interfaces.srv._authorize_payment import AuthorizePayment_Request as Request
    from smart_shop_interfaces.srv._authorize_payment import AuthorizePayment_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
