#!/bin/bash
gnome-terminal -- /bin/sh -c 'rosrun image_view image_view image:=/fiducial_images _image_transport:=compressed _autosize true; exec bash' 
