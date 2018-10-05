all: main

main.o: main.cpp readPPM.h writeJPEG.h
	g++ -c -Werror main.cpp

readPPM.o: readPPM.cpp readPPM.h
	g++ -c -Werror readPPM.cpp

writeJPEG.o: writeJPEG.cpp writeJPEG.h
	g++ -c -Werror writeJPEG.cpp

main: main.o readPPM.o writeJPEG.o
	g++ -o main main.o readPPM.o writeJPEG.o -ljpeg
