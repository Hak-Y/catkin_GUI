execute_process(COMMAND "/home/hak/catkin_SEER/build/kr_python_interface/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/hak/catkin_SEER/build/kr_python_interface/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
