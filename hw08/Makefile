all: main

main.o: main.cpp Angle.h
	g++ -c -g -Werror main.cpp

Angle.o: Angle.cpp Angle.h
	g++ -c -g -Werror Angle.cpp

Point.o: Point.cpp Point.h
	g++ -c -g -Werror Point.cpp

Fish.o: Fish.cpp Fish.h
	g++ -c -g -Werror Fish.cpp

Population: Population.cpp Population.h
	g++ -c -g -Werror Population.cpp

Log: Log.cpp Log.h
	g++ -c -g -Werror Log.cpp

main: main.o Angle.o Point.o Fish.o Population.o Log.o
	g++ -o main main.o Angle.o Point.o Fish.o Population.o Log.o

clean:
	rm main *.o