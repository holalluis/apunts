https://www.youtube.com/watch?v=cASS3R-SAgs&list=PLdOYTlKwc71ljrfUqrKYoULxRjqI0p8it&index=2&ab_channel=ErlangTutorial

#invocar REPL i sortir
$ erl
1> q().

#compilar fitxer.erl -> fitxer.beam des d'erl
$ erl
1> c(fitxer).
{ok,fitxer}
2> fitxer:funcio().
resultat

#compilar fitxer.erl -> fitxer.beam des de bash
$ erlc fitxer.erl
$ ls
fitxer.erl fitxer.beam

#invocar erl quan ja existeix el fitxer beam
$ erl
1> fitxer:funcio().

#exemple hello.erl
```erlang
  -module(hello).
  -export([start/0]).

  start() ->
    io:format("Hello world~n").
```
$ erlc hello.erl
$ erl
1> hello:start().
Hello world
