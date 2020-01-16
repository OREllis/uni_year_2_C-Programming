CC=gcc
CFLAGS=-pedantic -Wall
SRC := $(wildcard *.c)
OBJ := $(patsubst %.c,%.out,$(SRC))

all: $(OBJ)

%.out: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm $(wildcard *.out)
