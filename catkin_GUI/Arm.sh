#!/bin/bash
gnome-terminal -- /bin/sh -c 'rosservice call /mavros/cmd/arming True; '
