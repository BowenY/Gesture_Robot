# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "crr_robot_controller: 1 messages, 1 services")

set(MSG_I_FLAGS "-Icrr_robot_controller:/home/jian/catkin_ws/src/crr_robot_controller/msg;-Istd_msgs:/opt/ros/hydro/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(crr_robot_controller_generate_messages ALL)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(crr_robot_controller
  "/home/jian/catkin_ws/src/crr_robot_controller/msg/crrContrl.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/crr_robot_controller
)

### Generating Services
_generate_srv_cpp(crr_robot_controller
  "/home/jian/catkin_ws/src/crr_robot_controller/srv/crrCtrl.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/crr_robot_controller
)

### Generating Module File
_generate_module_cpp(crr_robot_controller
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/crr_robot_controller
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(crr_robot_controller_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(crr_robot_controller_generate_messages crr_robot_controller_generate_messages_cpp)

# target for backward compatibility
add_custom_target(crr_robot_controller_gencpp)
add_dependencies(crr_robot_controller_gencpp crr_robot_controller_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS crr_robot_controller_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(crr_robot_controller
  "/home/jian/catkin_ws/src/crr_robot_controller/msg/crrContrl.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/crr_robot_controller
)

### Generating Services
_generate_srv_lisp(crr_robot_controller
  "/home/jian/catkin_ws/src/crr_robot_controller/srv/crrCtrl.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/crr_robot_controller
)

### Generating Module File
_generate_module_lisp(crr_robot_controller
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/crr_robot_controller
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(crr_robot_controller_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(crr_robot_controller_generate_messages crr_robot_controller_generate_messages_lisp)

# target for backward compatibility
add_custom_target(crr_robot_controller_genlisp)
add_dependencies(crr_robot_controller_genlisp crr_robot_controller_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS crr_robot_controller_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(crr_robot_controller
  "/home/jian/catkin_ws/src/crr_robot_controller/msg/crrContrl.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/crr_robot_controller
)

### Generating Services
_generate_srv_py(crr_robot_controller
  "/home/jian/catkin_ws/src/crr_robot_controller/srv/crrCtrl.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/crr_robot_controller
)

### Generating Module File
_generate_module_py(crr_robot_controller
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/crr_robot_controller
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(crr_robot_controller_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(crr_robot_controller_generate_messages crr_robot_controller_generate_messages_py)

# target for backward compatibility
add_custom_target(crr_robot_controller_genpy)
add_dependencies(crr_robot_controller_genpy crr_robot_controller_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS crr_robot_controller_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/crr_robot_controller)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/crr_robot_controller
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(crr_robot_controller_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/crr_robot_controller)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/crr_robot_controller
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(crr_robot_controller_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/crr_robot_controller)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/crr_robot_controller\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/crr_robot_controller
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(crr_robot_controller_generate_messages_py std_msgs_generate_messages_py)
