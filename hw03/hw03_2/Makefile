all: main

hw03.o: hw03.cpp swap.h 
	g++ -c -Werror hw03.cpp

swap.o: swap.cpp swap.h
	g++ -c -Werror swap.cpp

main: hw03.o swap.o
	g++ -o main hw03.o swap.o
