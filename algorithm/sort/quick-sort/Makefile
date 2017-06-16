CC = gcc
CFLAGS = -W -Wall
INCLUDESDIR = -I /ts_lib
TARGET = main
OBJECTS = main.o common.o

$(TARGET) : main.o common.o
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)
main.o : common.h main.c
	$(CC) $(CFLAGS) -c main.c
common.o : common.h common.c
	$(CC) $(CFLAGS) -c common.c

clean :
	rm -f *.o
