all: main

main.o: main.cpp Angle.h
	g++ -c -Werror main.cpp

Angle.o: Angle.cpp Angle.h
	g++ -c -Werror Angle.cpp

main: main.o Angle.o
	g++ -o main main.o Angle.o
