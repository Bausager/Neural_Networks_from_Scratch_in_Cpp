



all: output.out



output.out: main.o OwnLib.o
	g++ main.o OwnLib.o -o output.out
	#./output

main.o: main.cpp
	g++ -Wall -std=c++14 -c main.cpp

OwnLib.o: OwnLib.cpp OwnLib.h
	g++ -Wall -std=c++14 -c OwnLib.cpp




clean:
	rm *.o *.out
	clear