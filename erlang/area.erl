-module(area).
-export([area/1]).

area({circle,R})      -> 3.141592*R*R;
area({rectangle,W,H}) -> W*H;
area({triangle,B,H})  -> B*H/2.
