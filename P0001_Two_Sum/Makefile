CFLAGS = -Werror -Wshadow -Wall -O3 -g
GCC = gcc $(CFLAGS)

all: twoSum.o
	$(GCC) twoSum.c -o twoSum

%.o: %.c 
	$(GCC) -c $<

test: all
	./twoSum

memory:
	valgrind -v --tool=memcheck --leak-check=full --show-reachable=yes p8 input

clean:
	/bin/rm -f *.o
	/bin/rm -f twoSum
