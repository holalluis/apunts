# Graba pantalla a out.mov (mac)
  ffmpeg -f avfoundation -r 25 -i 1: out.mov

# Convertir arxius png a .gif, cada imatge 1 segon
  (exemple: img001.png img002.png ... img 100.png)
  ffmpeg -framerate 1 -i img%03d.png out.gif

# convertir mkv a mp4
  ffmpeg -i out.mkv -vcodec h264 -acodec aac -strict -2 out.mp4

# converttir mp4 a gif
  ffmpeg -i out.mp4 -ss 00:00:00.000 -pix_fmt rgb24 -r 10 -s 320x240 -t 00:00:10.000 out.gif
