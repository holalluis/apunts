#!/bin/bash
: '
Fer streaming a facebook o youtube
nota: "key" canvia a cada streaming
'
#list devices
#ffmpeg -list_devices true -f avfoundation -i dummy && exit

#funció general (mac os x)
function streaming(){
  pantalla=$1
  audio=$2
  url=$3
  key=$4
  ffmpeg -f avfoundation -s 426x240 \
    -i "$pantalla:$audio" -capture_cursor 1 -capture_mouse_clicks 1 \
    -c:v libx264 -bufsize 6000k -vb 400k -maxrate 1500k \
    -deinterlace -vcodec libx264 -preset ultrafast -g 30 -r 30 -f flv \
    "$url/$key"
}

function facebooklive(){
  pantalla=0 #camera facetime
  pantalla=1 #primera pantalla
  pantalla=2 #segona pantalla
  audio=1 #Built-in Microphone                                                                                     
  audio=3 #Komplete Audio 6 
  url="rtmp://rtmp-api.facebook.com:80/rtmp"
  key="10213954952096730?ds=1&s_l=1&a=ATjaYe_bDiGtVoMP"
  streaming $pantalla $audio $url $key
}
#facebooklive

function youtubegaming(){
  pantalla=0 #camera facetime
  pantalla=1 #primera pantalla
  pantalla=2 #segona pantalla
  audio=1 #Built-in Microphone                                                                                     
  audio=3 #Komplete Audio 6 
  url="rtmp://a.rtmp.youtube.com/live2"
  key="s48g-7478-w7x8-e78b"
  streaming $pantalla $audio $url $key
}
#youtubegaming
