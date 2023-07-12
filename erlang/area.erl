-module(area).
-export([area/1]).

area({rectangle,W,H}) -> W*H;
area({circle,R})      -> 3.141592*R*R;
area({square,S})      -> S*S.
