
# $^ significa tots els requisits (multi.c *.o)
# $@ significa el target (multi)
objects=a.o b.o c.o d.o
multi: multi.c $(objects)
	cc $^ -o $@

clean:
	rm *.o multi
