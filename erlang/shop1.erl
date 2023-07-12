-module(shop1).
-export([total/1]).

total([{What,N}|T]) -> N*shop:cost(What) + total(T);
total([])           ->0.
