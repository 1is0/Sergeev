CC=cl
CFLAGS=-c -Wall

all: magic

magic: Main.obj 
    $(CC) Main.obj -o magic

Main.o: Main.c
    $(CC) $(CFLAGS) Main.c
