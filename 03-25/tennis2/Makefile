all: score.bin

score.bin: main.o Score.o
	g++ -o score.bin main.o Score.o

main.o: main.cpp
	g++ -c main.cpp

tennis.o: tennis.cpp tennis.h
	g++ -c tennis.cpp

clean:
	rm -f *.o *.bin