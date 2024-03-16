#variables
#CC     = gcc
#OPTIM  = -O2
#CFLAGS = -nostdlib -static

# make "recipes"
# "target": "dependencies"
#   "actions"

#example:
#nn: nn.c
#	$(CC) $(CFLAGS) $^ $(OPTIM) -lm -o $@

all: s o

s:
	gcc   -S $(CFLAGS) hi.c -o hi.gcc.s;
	clang -S $(CFLAGS) hi.c -o hi.clang.s;

o:
	gcc   -c $(CFLAGS) hi.c -o hi.gcc.o;
	clang -c $(CFLAGS) hi.c -o hi.clang.o;

clean:
	rm -f *.o *.s a.out
