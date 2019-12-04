
#grabar
#ffmpeg -f avfoundation -i "<screen device index>:<audio device index>" output.mkv
#ffmpeg -f avfoundation -r 30 -i 2.0: out.mkv

#-r $n  #grabar a $n fps
#-i 2:  #grabar pantalla 2
#-preset ultrafast
#-video_size 1440x900
#-framerate 25
#-c:v libx264 -qp 0
#ffmpeg -f avfoundation -capture_cursor 1 -capture_mouse_clicks 0 -i "2.0:0.0" out.mkv

#convertir
#ffmpeg -i out.mkv -vcodec h264 -acodec aac -strict -2 out.mp4

