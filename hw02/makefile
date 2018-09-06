all: main

hw02.o: hw02.cpp bubble_sort.h 
	g++ -c -Werror hw02.cpp

bubble_sort.o: bubble_sort.cpp bubble_sort.h
	g++ -c -Werror bubble_sort.cpp

main: hw02.o bubble_sort.o
	g++ -o main hw02.o bubble_sort.o
