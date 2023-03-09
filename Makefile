main: main.o funcs.o
	g++ -Wall -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -Wall -o tests tests.o funcs.o

test-ascii: test-ascii.o
	g++ -Wall -o test-ascii test-ascii.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

test-ascii.o: test-ascii.cpp

clean:
	rm -f main.o funcs.o tests.o
