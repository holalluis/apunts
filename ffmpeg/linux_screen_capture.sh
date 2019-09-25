#!/bin/bash

ffmpeg \
  -s `xdpyinfo|grep 'dimensions:'|awk '{print $2}'` \
  -framerate 25 \
  -f x11grab \
  -i $DISPLAY \
  output.mp4
