ffmpeg -f avfoundation \
  -r 25 -capture_cursor 1 \
  -capture_mouse_clicks 0 \
  -i 1: out.mov
