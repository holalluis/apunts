#debian
ffmpeg -y -f alsa -i hw:0 -f x11grab -framerate 30 \
  -video_size 1366x768 -i :0.0+0,0 -c:v libx264 \
  -pix_fmt yuv420p -qp 0 -preset ultrafast \
  out.mp4
