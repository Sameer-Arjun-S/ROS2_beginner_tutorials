# generated from rosidl_generator_py/resource/_idl.py.em
# with input from beginner_tutorials:srv/ChangeString.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChangeString_Request(type):
    """Metaclass of message 'ChangeString_Request'."""

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
            module = import_type_support('beginner_tutorials')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beginner_tutorials.srv.ChangeString_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_string__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_string__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_string__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_string__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_string__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeString_Request(metaclass=Metaclass_ChangeString_Request):
    """Message class 'ChangeString_Request'."""

    __slots__ = [
        '_ip',
    ]

    _fields_and_field_types = {
        'ip': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ip = kwargs.get('ip', str())

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
        if self.ip != other.ip:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ip(self):
        """Message field 'ip'."""
        return self._ip

    @ip.setter
    def ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ip' field must be of type 'str'"
        self._ip = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChangeString_Response(type):
    """Metaclass of message 'ChangeString_Response'."""

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
            module = import_type_support('beginner_tutorials')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beginner_tutorials.srv.ChangeString_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_string__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_string__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_string__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_string__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_string__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeString_Response(metaclass=Metaclass_ChangeString_Response):
    """Message class 'ChangeString_Response'."""

    __slots__ = [
        '_op',
    ]

    _fields_and_field_types = {
        'op': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.op = kwargs.get('op', str())

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
        if self.op != other.op:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def op(self):
        """Message field 'op'."""
        return self._op

    @op.setter
    def op(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'op' field must be of type 'str'"
        self._op = value


class Metaclass_ChangeString(type):
    """Metaclass of service 'ChangeString'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('beginner_tutorials')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beginner_tutorials.srv.ChangeString')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__change_string

            from beginner_tutorials.srv import _change_string
            if _change_string.Metaclass_ChangeString_Request._TYPE_SUPPORT is None:
                _change_string.Metaclass_ChangeString_Request.__import_type_support__()
            if _change_string.Metaclass_ChangeString_Response._TYPE_SUPPORT is None:
                _change_string.Metaclass_ChangeString_Response.__import_type_support__()


class ChangeString(metaclass=Metaclass_ChangeString):
    from beginner_tutorials.srv._change_string import ChangeString_Request as Request
    from beginner_tutorials.srv._change_string import ChangeString_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
