CC = g++ #compiler we're using is g++
CFLAGS = -g -Wall #-g = debugging info, -Wall = all warnings

knight: main.o tile.o node.o
	$(CC) $(CFLAGS) main.o tile.o node.o -o knight

tile.o: tile.h tile.cpp
	$(CC) $(CFLAGS) -c tile.cpp

node.o: node.h node.cpp
	$(CC) $(CFLAGS) -c node.cpp

main.o: main.cpp tile.cpp node.cpp
	$(CC) $(CFLAGS) -c main.cpp

run:	knight
	./knight

clean: #remove everything
	rm *.o
	rm knight
