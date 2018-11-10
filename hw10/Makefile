all: main

main.o: main.cpp Angle.h
	g++ -c -g -Werror main.cpp

Point.o: Point.cpp Point.h
	g++ -c -g -Werror Point.cpp

Fish.o: Fish.cpp Fish.h
	g++ -c -g -Werror Fish.cpp

Flippy_Fish.o: Flippy_Fish.cpp Flippy_Fish.h
	g++ -c -g -Werror Flippy_Fish.cpp

Drunken_Fish.o: Drunken_Fish.cpp Drunken_Fish.h
	g++ -c -g -Werror Drunken_Fish.cpp

Log: Log.cpp Log.h
	g++ -c -g -Werror Log.cpp

main: main.o Point.o Fish.o Flippy_Fish.o Drunken_Fish.o Log.o
	g++ -o main main.o Point.o Fish.o Flippy_Fish.o Drunken_Fish.o Log.o

clean:
	rm main *.o