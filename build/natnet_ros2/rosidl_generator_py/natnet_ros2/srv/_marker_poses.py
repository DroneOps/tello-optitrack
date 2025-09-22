# generated from rosidl_generator_py/resource/_idl.py.em
# with input from natnet_ros2:srv/MarkerPoses.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MarkerPoses_Request(type):
    """Metaclass of message 'MarkerPoses_Request'."""

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
            module = import_type_support('natnet_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'natnet_ros2.srv.MarkerPoses_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__marker_poses__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__marker_poses__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__marker_poses__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__marker_poses__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__marker_poses__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MarkerPoses_Request(metaclass=Metaclass_MarkerPoses_Request):
    """Message class 'MarkerPoses_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'x_position'
# Member 'y_position'
# Member 'z_position'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_MarkerPoses_Response(type):
    """Metaclass of message 'MarkerPoses_Response'."""

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
            module = import_type_support('natnet_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'natnet_ros2.srv.MarkerPoses_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__marker_poses__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__marker_poses__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__marker_poses__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__marker_poses__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__marker_poses__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MarkerPoses_Response(metaclass=Metaclass_MarkerPoses_Response):
    """Message class 'MarkerPoses_Response'."""

    __slots__ = [
        '_num_of_markers',
        '_x_position',
        '_y_position',
        '_z_position',
    ]

    _fields_and_field_types = {
        'num_of_markers': 'int64',
        'x_position': 'sequence<double>',
        'y_position': 'sequence<double>',
        'z_position': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num_of_markers = kwargs.get('num_of_markers', int())
        self.x_position = array.array('d', kwargs.get('x_position', []))
        self.y_position = array.array('d', kwargs.get('y_position', []))
        self.z_position = array.array('d', kwargs.get('z_position', []))

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
        if self.num_of_markers != other.num_of_markers:
            return False
        if self.x_position != other.x_position:
            return False
        if self.y_position != other.y_position:
            return False
        if self.z_position != other.z_position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_of_markers(self):
        """Message field 'num_of_markers'."""
        return self._num_of_markers

    @num_of_markers.setter
    def num_of_markers(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_of_markers' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num_of_markers' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num_of_markers = value

    @builtins.property
    def x_position(self):
        """Message field 'x_position'."""
        return self._x_position

    @x_position.setter
    def x_position(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'x_position' array.array() must have the type code of 'd'"
            self._x_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'x_position' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._x_position = array.array('d', value)

    @builtins.property
    def y_position(self):
        """Message field 'y_position'."""
        return self._y_position

    @y_position.setter
    def y_position(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'y_position' array.array() must have the type code of 'd'"
            self._y_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'y_position' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._y_position = array.array('d', value)

    @builtins.property
    def z_position(self):
        """Message field 'z_position'."""
        return self._z_position

    @z_position.setter
    def z_position(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'z_position' array.array() must have the type code of 'd'"
            self._z_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'z_position' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._z_position = array.array('d', value)


class Metaclass_MarkerPoses(type):
    """Metaclass of service 'MarkerPoses'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('natnet_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'natnet_ros2.srv.MarkerPoses')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__marker_poses

            from natnet_ros2.srv import _marker_poses
            if _marker_poses.Metaclass_MarkerPoses_Request._TYPE_SUPPORT is None:
                _marker_poses.Metaclass_MarkerPoses_Request.__import_type_support__()
            if _marker_poses.Metaclass_MarkerPoses_Response._TYPE_SUPPORT is None:
                _marker_poses.Metaclass_MarkerPoses_Response.__import_type_support__()


class MarkerPoses(metaclass=Metaclass_MarkerPoses):
    from natnet_ros2.srv._marker_poses import MarkerPoses_Request as Request
    from natnet_ros2.srv._marker_poses import MarkerPoses_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
