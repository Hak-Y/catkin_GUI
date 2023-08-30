#!/bin/bash
gnome-terminal -- /bin/sh -c 'rosservice call /mavros/cmd/command "command: 176"; ' 
