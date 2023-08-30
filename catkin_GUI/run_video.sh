#!/bin/bash

# Source the setup.bash file to set ROS environment variables
gnome-terminal -- /bin/sh -c "cd ~/catkin_ws_stream/src/stream_pkg/src && python stream_client.py; exec bash"

