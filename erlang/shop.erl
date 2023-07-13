-module(shop).
-export([main/0]).

% cost of 1 item
cost(orange) -> 1;
cost(apple)  -> 2;
cost(pear)   -> 3;
cost(milk)   -> 4;

%cost of N items
cost({What,N}) -> N*cost(What).

%sum a list of numbers
sum([])    -> 0;
sum([H|T]) -> H+sum(T).

main() ->
  %create buylist
  Buy = [
    {orange,1},
    {apple, 2},
    {pear,  3},
    {milk,  4}
  ],

  %transform buylist to costs (array of numbers)
  %use [X || X<-L] syntax to define X on the fly
  Costs = [cost(X) || X <- Buy],

  %sum all costs
  Total = sum(Costs),

  %display result
  io:format("The buylist ~w costs ~w eur~n",[Buy,Total]).

