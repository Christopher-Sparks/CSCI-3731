all: main

main.o: main.cpp readPPM.h writePPM.h
	g++ -c -Werror main.cpp

readPPM.o: readPPM.cpp readPPM.h
	g++ -c -Werror readPPM.cpp

writePPM.o: writePPM.cpp writePPM.h
	g++ -c -Werror writePPM.cpp

main: main.o readPPM.o writePPM.o
	g++ -o main main.o readPPM.o writePPM.o
