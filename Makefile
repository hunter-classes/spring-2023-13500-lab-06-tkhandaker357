main: main.o caesar.o vigenere.o decrypt.o
	g++ -Wall -o main main.o caesar.o vigenere.o decrypt.o
 
tests: tests.o funcs.o
	g++ -Wall -o tests tests.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -Wall -o test-ascii test-ascii.o

main.o: main.cpp decrypt.h

tests.o: tests.cpp doctest.h decrypt.h vigenere.h caesar.h
 
caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h caesar.h

decrypt.o: decrypt.cpp vigenere.h caesar.h

test-ascii.o: test-ascii.cpp

clean:
	rm -f main.o caesar.o vigenere.o decrypt.o funcs.o tests.o test-ascii.o
