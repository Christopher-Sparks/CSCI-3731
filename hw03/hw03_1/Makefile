all: main

hw03.o: hw03.cpp file_exists.h 
	g++ -c -Werror hw03.cpp

file_exists.o: file_exists.cpp file_exists.h
	g++ -c -Werror file_exists.cpp

main: hw03.o file_exists.o
	g++ -o main hw03.o file_exists.o
