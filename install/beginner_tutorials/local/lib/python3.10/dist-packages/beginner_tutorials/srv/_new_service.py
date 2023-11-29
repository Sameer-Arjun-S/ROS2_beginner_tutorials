# generated from rosidl_generator_py/resource/_idl.py.em
# with input from beginner_tutorials:srv/NewService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NewService_Request(type):
    """Metaclass of message 'NewService_Request'."""

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
                'beginner_tutorials.srv.NewService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__new_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__new_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__new_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__new_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__new_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NewService_Request(metaclass=Metaclass_NewService_Request):
    """Message class 'NewService_Request'."""

    __slots__ = [
        '_request_message',
    ]

    _fields_and_field_types = {
        'request_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.request_message = kwargs.get('request_message', str())

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
        if self.request_message != other.request_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def request_message(self):
        """Message field 'request_message'."""
        return self._request_message

    @request_message.setter
    def request_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'request_message' field must be of type 'str'"
        self._request_message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NewService_Response(type):
    """Metaclass of message 'NewService_Response'."""

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
                'beginner_tutorials.srv.NewService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__new_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__new_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__new_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__new_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__new_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NewService_Response(metaclass=Metaclass_NewService_Response):
    """Message class 'NewService_Response'."""

    __slots__ = [
        '_response_message',
    ]

    _fields_and_field_types = {
        'response_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response_message = kwargs.get('response_message', str())

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
        if self.response_message != other.response_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response_message(self):
        """Message field 'response_message'."""
        return self._response_message

    @response_message.setter
    def response_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response_message' field must be of type 'str'"
        self._response_message = value


class Metaclass_NewService(type):
    """Metaclass of service 'NewService'."""

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
                'beginner_tutorials.srv.NewService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__new_service

            from beginner_tutorials.srv import _new_service
            if _new_service.Metaclass_NewService_Request._TYPE_SUPPORT is None:
                _new_service.Metaclass_NewService_Request.__import_type_support__()
            if _new_service.Metaclass_NewService_Response._TYPE_SUPPORT is None:
                _new_service.Metaclass_NewService_Response.__import_type_support__()


class NewService(metaclass=Metaclass_NewService):
    from beginner_tutorials.srv._new_service import NewService_Request as Request
    from beginner_tutorials.srv._new_service import NewService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
