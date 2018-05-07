# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "robotican_hardware_interface: 5 messages, 1 services")

set(MSG_I_FLAGS "-Irobotican_hardware_interface:/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg;-Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(robotican_hardware_interface_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg" NAME_WE)
add_custom_target(_robotican_hardware_interface_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotican_hardware_interface" "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg" ""
)

get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg" NAME_WE)
add_custom_target(_robotican_hardware_interface_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotican_hardware_interface" "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg" ""
)

get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/imuClib.msg" NAME_WE)
add_custom_target(_robotican_hardware_interface_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotican_hardware_interface" "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/imuClib.msg" "geometry_msgs/Vector3:geometry_msgs/Vector3Stamped:std_msgs/Header"
)

get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainEnable.msg" NAME_WE)
add_custom_target(_robotican_hardware_interface_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotican_hardware_interface" "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainEnable.msg" "robotican_hardware_interface/JointEnable"
)

get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainLimits.msg" NAME_WE)
add_custom_target(_robotican_hardware_interface_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotican_hardware_interface" "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainLimits.msg" "robotican_hardware_interface/JointLimits"
)

get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/srv/setImuClib.srv" NAME_WE)
add_custom_target(_robotican_hardware_interface_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotican_hardware_interface" "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/srv/setImuClib.srv" ""
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_cpp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_cpp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/imuClib.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3Stamped.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_cpp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainEnable.msg"
  "${MSG_I_FLAGS}"
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_cpp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainLimits.msg"
  "${MSG_I_FLAGS}"
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotican_hardware_interface
)

### Generating Services
_generate_srv_cpp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/srv/setImuClib.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotican_hardware_interface
)

### Generating Module File
_generate_module_cpp(robotican_hardware_interface
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotican_hardware_interface
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(robotican_hardware_interface_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(robotican_hardware_interface_generate_messages robotican_hardware_interface_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_cpp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_cpp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/imuClib.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_cpp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainEnable.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_cpp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainLimits.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_cpp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/srv/setImuClib.srv" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_cpp _robotican_hardware_interface_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(robotican_hardware_interface_gencpp)
add_dependencies(robotican_hardware_interface_gencpp robotican_hardware_interface_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS robotican_hardware_interface_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_lisp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_lisp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/imuClib.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3Stamped.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_lisp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainEnable.msg"
  "${MSG_I_FLAGS}"
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_lisp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainLimits.msg"
  "${MSG_I_FLAGS}"
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotican_hardware_interface
)

### Generating Services
_generate_srv_lisp(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/srv/setImuClib.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotican_hardware_interface
)

### Generating Module File
_generate_module_lisp(robotican_hardware_interface
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotican_hardware_interface
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(robotican_hardware_interface_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(robotican_hardware_interface_generate_messages robotican_hardware_interface_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_lisp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_lisp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/imuClib.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_lisp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainEnable.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_lisp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainLimits.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_lisp _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/srv/setImuClib.srv" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_lisp _robotican_hardware_interface_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(robotican_hardware_interface_genlisp)
add_dependencies(robotican_hardware_interface_genlisp robotican_hardware_interface_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS robotican_hardware_interface_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_py(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_py(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/imuClib.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3Stamped.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_py(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainEnable.msg"
  "${MSG_I_FLAGS}"
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface
)
_generate_msg_py(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainLimits.msg"
  "${MSG_I_FLAGS}"
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface
)

### Generating Services
_generate_srv_py(robotican_hardware_interface
  "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/srv/setImuClib.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface
)

### Generating Module File
_generate_module_py(robotican_hardware_interface
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(robotican_hardware_interface_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(robotican_hardware_interface_generate_messages robotican_hardware_interface_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointEnable.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_py _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/JointLimits.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_py _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/imuClib.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_py _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainEnable.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_py _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/msg/ChainLimits.msg" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_py _robotican_hardware_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/robotican_hardware_interface/srv/setImuClib.srv" NAME_WE)
add_dependencies(robotican_hardware_interface_generate_messages_py _robotican_hardware_interface_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(robotican_hardware_interface_genpy)
add_dependencies(robotican_hardware_interface_genpy robotican_hardware_interface_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS robotican_hardware_interface_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotican_hardware_interface)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotican_hardware_interface
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(robotican_hardware_interface_generate_messages_cpp sensor_msgs_generate_messages_cpp)
add_dependencies(robotican_hardware_interface_generate_messages_cpp std_msgs_generate_messages_cpp)
add_dependencies(robotican_hardware_interface_generate_messages_cpp geometry_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotican_hardware_interface)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotican_hardware_interface
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(robotican_hardware_interface_generate_messages_lisp sensor_msgs_generate_messages_lisp)
add_dependencies(robotican_hardware_interface_generate_messages_lisp std_msgs_generate_messages_lisp)
add_dependencies(robotican_hardware_interface_generate_messages_lisp geometry_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotican_hardware_interface
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(robotican_hardware_interface_generate_messages_py sensor_msgs_generate_messages_py)
add_dependencies(robotican_hardware_interface_generate_messages_py std_msgs_generate_messages_py)
add_dependencies(robotican_hardware_interface_generate_messages_py geometry_msgs_generate_messages_py)
