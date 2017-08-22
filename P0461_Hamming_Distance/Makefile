CFLAGS = -Werror -Wshadow -Wall -O3 -g
GCC = gcc $(CFLAGS)

all: main.o
	$(GCC) main.c -o hamming

%.o: %.c 
	$(GCC) -c $<

test: all
	./hamming input

memory:
	valgrind -v --tool=memcheck --leak-check=full --show-reachable=yes p8 input

clean:
	/bin/rm -f *.o
	/bin/rm -f hamming
