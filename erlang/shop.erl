-module(shop).
-export([cost/1]).

cost(oranges) -> 1;
cost(apples)  -> 2;
cost(pears)   -> 3;
cost(milk)    -> 4.
