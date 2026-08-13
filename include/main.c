CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude
SRC = src/main.c \
      src/input.c
TARGET = bin/shellforge
all: $(TARGET)
$(TARGET):
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
run:
	./$(TARGET)
clean:
	rm -rf bin/*
10. Compile
make clean
make
11. Execute
make run
Example:
=================================
ShellForge Version 2.0
=================================
myshell> This is a very very very long command without any fixed limit
You entered :
This is a very very very long command without any fixed limit
myshell> exit
Goodbye!
