#!/bin/bash

# Change to the Downloads directory
cd ~/Downloads

# Give execute permissions to the QgroundControl.Appimage file (if needed)
chmod +x QGroundControl.AppImage

# Open a new terminal window and execute QGroundControl.AppImage
gnome-terminal -- /bin/sh -c './QGroundControl.AppImage;'
