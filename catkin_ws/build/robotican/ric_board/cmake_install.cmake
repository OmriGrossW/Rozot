# Install script for directory: /users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/users/studs/bsc/2016/sdanie/catkin_ws/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ric_board/msg" TYPE FILE FILES
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/Battery.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/Rangers.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/Named_Data.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/Servos.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/Status.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/Encoders.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/GPS.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/IMU.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/VelCommand.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/Odom.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/Motor.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/Odometry.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/StatusMsg.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/DevStatus.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/MonitorDevs.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/PPM.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/calibField.msg"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg/imuCalib.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ric_board/srv" TYPE FILE FILES
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/srv/set_odom.srv"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/srv/Relay.srv"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/srv/get_devs.srv"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/srv/setParam.srv"
    "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/srv/calibIMU.srv"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ric_board/cmake" TYPE FILE FILES "/users/studs/bsc/2016/sdanie/catkin_ws/build/robotican/ric_board/catkin_generated/installspace/ric_board-msg-paths.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/users/studs/bsc/2016/sdanie/catkin_ws/devel/include/ric_board")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/users/studs/bsc/2016/sdanie/catkin_ws/devel/share/common-lisp/ros/ric_board")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/users/studs/bsc/2016/sdanie/catkin_ws/devel/lib/python2.7/dist-packages/ric_board")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/users/studs/bsc/2016/sdanie/catkin_ws/devel/lib/python2.7/dist-packages/ric_board")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/users/studs/bsc/2016/sdanie/catkin_ws/build/robotican/ric_board/catkin_generated/installspace/ric_board.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ric_board/cmake" TYPE FILE FILES "/users/studs/bsc/2016/sdanie/catkin_ws/build/robotican/ric_board/catkin_generated/installspace/ric_board-msg-extras.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ric_board/cmake" TYPE FILE FILES
    "/users/studs/bsc/2016/sdanie/catkin_ws/build/robotican/ric_board/catkin_generated/installspace/ric_boardConfig.cmake"
    "/users/studs/bsc/2016/sdanie/catkin_ws/build/robotican/ric_board/catkin_generated/installspace/ric_boardConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ric_board" TYPE FILE FILES "/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

