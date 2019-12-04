#linux
  https://www.commandlinefu.com/commands/view/7109/capture-video-of-a-linux-desktop
  ffmpeg -y -f alsa -ac 2 -i pulse -f x11grab -r 30 -s `xdpyinfo | grep 'dimensions:'|awk '{print $2}'` -i :0.0 -acodec pcm_s16le output.wav -an -vcodec libx264 -vpre lossless_ultrafast -threads 0 output.mp4

# OS X: grava pantalla a out.mov
  ffmpeg -f avfoundation -r 25 -i 1: out.mov

# Convertir arxius png a .gif, cada imatge 1 segon
  (exemple: img001.png img002.png ... img 100.png)
  ffmpeg -framerate 1 -i img%03d.png out.gif

# convertir mkv a mp4
  ffmpeg -i out.mkv -vcodec h264 -acodec aac -strict -2 out.mp4

# converttir mp4 a gif
  ffmpeg -i out.mp4 -ss 00:00:00.000 -pix_fmt rgb24 -r 10 -s 320x240 -t 00:00:10.000 out.gif
