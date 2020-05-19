
CC=cl
CFLAGS=-c -Wall

all: magic

magic: main.obj 
    $(CC) main.obj -o magic

main.o: main.c
    $(CC) $(CFLAGS) main.c
