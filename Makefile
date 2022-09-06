
all: output.out

output.out: main.o NNFS.o
	g++ main.o NNFS.o -o output.out

main.o: main.cpp
	g++ -Wall -std=c++14 -c main.cpp

NNFS.o: NNFS.cpp NNFS.h
	g++ -Wall -std=c++14 -c NNFS.cpp


clean:
	rm *.o