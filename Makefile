CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c2x -pedantic
OBJS = main.o stack.o parser.o
BIN = main

all: $(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY : clean
clean:
	$(RM) $(OBJS) $(BIN)
