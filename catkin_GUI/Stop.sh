#!/bin/bash

# Source the setup.bash file to set ROS environment variables
gnome-terminal -- /bin/sh -c "rosservice call /mavros/set_mode 'base_mode: 0
custom_mode: ''AUTO.LAND'''; "
