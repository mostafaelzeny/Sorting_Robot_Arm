# generated from rosidl_generator_py/resource/_idl.py.em
# with input from orange_robot_interfaces:action/ExecuteSequence.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'angles'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExecuteSequence_Goal(type):
    """Metaclass of message 'ExecuteSequence_Goal'."""

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
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_sequence__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_sequence__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_sequence__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_sequence__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_sequence__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteSequence_Goal(metaclass=Metaclass_ExecuteSequence_Goal):
    """Message class 'ExecuteSequence_Goal'."""

    __slots__ = [
        '_home',
        '_detect',
        '_ripe',
        '_move_to_target',
        '_grip',
        '_place',
        '_return_home',
        '_angles',
        '_diameter',
        '_ripeness',
    ]

    _fields_and_field_types = {
        'home': 'boolean',
        'detect': 'boolean',
        'ripe': 'boolean',
        'move_to_target': 'boolean',
        'grip': 'boolean',
        'place': 'boolean',
        'return_home': 'boolean',
        'angles': 'sequence<float>',
        'diameter': 'float',
        'ripeness': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.home = kwargs.get('home', bool())
        self.detect = kwargs.get('detect', bool())
        self.ripe = kwargs.get('ripe', bool())
        self.move_to_target = kwargs.get('move_to_target', bool())
        self.grip = kwargs.get('grip', bool())
        self.place = kwargs.get('place', bool())
        self.return_home = kwargs.get('return_home', bool())
        self.angles = array.array('f', kwargs.get('angles', []))
        self.diameter = kwargs.get('diameter', float())
        self.ripeness = kwargs.get('ripeness', int())

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
        if self.home != other.home:
            return False
        if self.detect != other.detect:
            return False
        if self.ripe != other.ripe:
            return False
        if self.move_to_target != other.move_to_target:
            return False
        if self.grip != other.grip:
            return False
        if self.place != other.place:
            return False
        if self.return_home != other.return_home:
            return False
        if self.angles != other.angles:
            return False
        if self.diameter != other.diameter:
            return False
        if self.ripeness != other.ripeness:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def home(self):
        """Message field 'home'."""
        return self._home

    @home.setter
    def home(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'home' field must be of type 'bool'"
        self._home = value

    @builtins.property
    def detect(self):
        """Message field 'detect'."""
        return self._detect

    @detect.setter
    def detect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'detect' field must be of type 'bool'"
        self._detect = value

    @builtins.property
    def ripe(self):
        """Message field 'ripe'."""
        return self._ripe

    @ripe.setter
    def ripe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ripe' field must be of type 'bool'"
        self._ripe = value

    @builtins.property
    def move_to_target(self):
        """Message field 'move_to_target'."""
        return self._move_to_target

    @move_to_target.setter
    def move_to_target(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'move_to_target' field must be of type 'bool'"
        self._move_to_target = value

    @builtins.property
    def grip(self):
        """Message field 'grip'."""
        return self._grip

    @grip.setter
    def grip(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'grip' field must be of type 'bool'"
        self._grip = value

    @builtins.property
    def place(self):
        """Message field 'place'."""
        return self._place

    @place.setter
    def place(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'place' field must be of type 'bool'"
        self._place = value

    @builtins.property
    def return_home(self):
        """Message field 'return_home'."""
        return self._return_home

    @return_home.setter
    def return_home(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'return_home' field must be of type 'bool'"
        self._return_home = value

    @builtins.property
    def angles(self):
        """Message field 'angles'."""
        return self._angles

    @angles.setter
    def angles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'angles' array.array() must have the type code of 'f'"
            self._angles = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'angles' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._angles = array.array('f', value)

    @builtins.property
    def diameter(self):
        """Message field 'diameter'."""
        return self._diameter

    @diameter.setter
    def diameter(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diameter' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'diameter' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._diameter = value

    @builtins.property
    def ripeness(self):
        """Message field 'ripeness'."""
        return self._ripeness

    @ripeness.setter
    def ripeness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ripeness' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ripeness' field must be an integer in [-2147483648, 2147483647]"
        self._ripeness = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteSequence_Result(type):
    """Metaclass of message 'ExecuteSequence_Result'."""

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
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_sequence__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_sequence__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_sequence__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_sequence__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_sequence__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteSequence_Result(metaclass=Metaclass_ExecuteSequence_Result):
    """Message class 'ExecuteSequence_Result'."""

    __slots__ = [
        '_success',
        '_result',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.result = kwargs.get('result', str())

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
        if self.success != other.success:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteSequence_Feedback(type):
    """Metaclass of message 'ExecuteSequence_Feedback'."""

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
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_sequence__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_sequence__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_sequence__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_sequence__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_sequence__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteSequence_Feedback(metaclass=Metaclass_ExecuteSequence_Feedback):
    """Message class 'ExecuteSequence_Feedback'."""

    __slots__ = [
        '_feedback',
    ]

    _fields_and_field_types = {
        'feedback': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.feedback = kwargs.get('feedback', str())

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
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'feedback' field must be of type 'str'"
        self._feedback = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteSequence_SendGoal_Request(type):
    """Metaclass of message 'ExecuteSequence_SendGoal_Request'."""

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
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_sequence__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_sequence__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_sequence__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_sequence__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_sequence__send_goal__request

            from orange_robot_interfaces.action import ExecuteSequence
            if ExecuteSequence.Goal.__class__._TYPE_SUPPORT is None:
                ExecuteSequence.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteSequence_SendGoal_Request(metaclass=Metaclass_ExecuteSequence_SendGoal_Request):
    """Message class 'ExecuteSequence_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'orange_robot_interfaces/ExecuteSequence_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['orange_robot_interfaces', 'action'], 'ExecuteSequence_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_Goal
        self.goal = kwargs.get('goal', ExecuteSequence_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_Goal
            assert \
                isinstance(value, ExecuteSequence_Goal), \
                "The 'goal' field must be a sub message of type 'ExecuteSequence_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteSequence_SendGoal_Response(type):
    """Metaclass of message 'ExecuteSequence_SendGoal_Response'."""

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
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_sequence__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_sequence__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_sequence__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_sequence__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_sequence__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteSequence_SendGoal_Response(metaclass=Metaclass_ExecuteSequence_SendGoal_Response):
    """Message class 'ExecuteSequence_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ExecuteSequence_SendGoal(type):
    """Metaclass of service 'ExecuteSequence_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__execute_sequence__send_goal

            from orange_robot_interfaces.action import _execute_sequence
            if _execute_sequence.Metaclass_ExecuteSequence_SendGoal_Request._TYPE_SUPPORT is None:
                _execute_sequence.Metaclass_ExecuteSequence_SendGoal_Request.__import_type_support__()
            if _execute_sequence.Metaclass_ExecuteSequence_SendGoal_Response._TYPE_SUPPORT is None:
                _execute_sequence.Metaclass_ExecuteSequence_SendGoal_Response.__import_type_support__()


class ExecuteSequence_SendGoal(metaclass=Metaclass_ExecuteSequence_SendGoal):
    from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_SendGoal_Request as Request
    from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteSequence_GetResult_Request(type):
    """Metaclass of message 'ExecuteSequence_GetResult_Request'."""

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
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_sequence__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_sequence__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_sequence__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_sequence__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_sequence__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteSequence_GetResult_Request(metaclass=Metaclass_ExecuteSequence_GetResult_Request):
    """Message class 'ExecuteSequence_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteSequence_GetResult_Response(type):
    """Metaclass of message 'ExecuteSequence_GetResult_Response'."""

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
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_sequence__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_sequence__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_sequence__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_sequence__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_sequence__get_result__response

            from orange_robot_interfaces.action import ExecuteSequence
            if ExecuteSequence.Result.__class__._TYPE_SUPPORT is None:
                ExecuteSequence.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteSequence_GetResult_Response(metaclass=Metaclass_ExecuteSequence_GetResult_Response):
    """Message class 'ExecuteSequence_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'orange_robot_interfaces/ExecuteSequence_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['orange_robot_interfaces', 'action'], 'ExecuteSequence_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_Result
        self.result = kwargs.get('result', ExecuteSequence_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_Result
            assert \
                isinstance(value, ExecuteSequence_Result), \
                "The 'result' field must be a sub message of type 'ExecuteSequence_Result'"
        self._result = value


class Metaclass_ExecuteSequence_GetResult(type):
    """Metaclass of service 'ExecuteSequence_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__execute_sequence__get_result

            from orange_robot_interfaces.action import _execute_sequence
            if _execute_sequence.Metaclass_ExecuteSequence_GetResult_Request._TYPE_SUPPORT is None:
                _execute_sequence.Metaclass_ExecuteSequence_GetResult_Request.__import_type_support__()
            if _execute_sequence.Metaclass_ExecuteSequence_GetResult_Response._TYPE_SUPPORT is None:
                _execute_sequence.Metaclass_ExecuteSequence_GetResult_Response.__import_type_support__()


class ExecuteSequence_GetResult(metaclass=Metaclass_ExecuteSequence_GetResult):
    from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_GetResult_Request as Request
    from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteSequence_FeedbackMessage(type):
    """Metaclass of message 'ExecuteSequence_FeedbackMessage'."""

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
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_sequence__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_sequence__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_sequence__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_sequence__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_sequence__feedback_message

            from orange_robot_interfaces.action import ExecuteSequence
            if ExecuteSequence.Feedback.__class__._TYPE_SUPPORT is None:
                ExecuteSequence.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteSequence_FeedbackMessage(metaclass=Metaclass_ExecuteSequence_FeedbackMessage):
    """Message class 'ExecuteSequence_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'orange_robot_interfaces/ExecuteSequence_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['orange_robot_interfaces', 'action'], 'ExecuteSequence_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_Feedback
        self.feedback = kwargs.get('feedback', ExecuteSequence_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_Feedback
            assert \
                isinstance(value, ExecuteSequence_Feedback), \
                "The 'feedback' field must be a sub message of type 'ExecuteSequence_Feedback'"
        self._feedback = value


class Metaclass_ExecuteSequence(type):
    """Metaclass of action 'ExecuteSequence'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('orange_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'orange_robot_interfaces.action.ExecuteSequence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__execute_sequence

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from orange_robot_interfaces.action import _execute_sequence
            if _execute_sequence.Metaclass_ExecuteSequence_SendGoal._TYPE_SUPPORT is None:
                _execute_sequence.Metaclass_ExecuteSequence_SendGoal.__import_type_support__()
            if _execute_sequence.Metaclass_ExecuteSequence_GetResult._TYPE_SUPPORT is None:
                _execute_sequence.Metaclass_ExecuteSequence_GetResult.__import_type_support__()
            if _execute_sequence.Metaclass_ExecuteSequence_FeedbackMessage._TYPE_SUPPORT is None:
                _execute_sequence.Metaclass_ExecuteSequence_FeedbackMessage.__import_type_support__()


class ExecuteSequence(metaclass=Metaclass_ExecuteSequence):

    # The goal message defined in the action definition.
    from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_Goal as Goal
    # The result message defined in the action definition.
    from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_Result as Result
    # The feedback message defined in the action definition.
    from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from orange_robot_interfaces.action._execute_sequence import ExecuteSequence_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
