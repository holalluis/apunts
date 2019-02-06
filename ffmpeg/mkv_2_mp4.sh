
#convertir $1

ffmpeg -i $1 -vcodec h264 -acodec aac -strict -2 out.mp4
