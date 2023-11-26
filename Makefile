
all: output.out


# Link command:
output.out: main.o NNFS.o
	g++ main.o NNFS.o -o output.out
	clear # On bigger projects, comment this out
	#./output.out # On bigger projects, comment this out
	#rm *.out *.o  #*.csv # On bigger projects, comment this out


# Compilation commands:
main.o: main.cpp
	g++ -Wall -std=c++14 -c main.cpp

NNFS.o: NNFS.cpp NNFS.h
	g++ -Wall -std=c++14 -c NNFS.cpp


clean:
	rm *.o *.out
	clear