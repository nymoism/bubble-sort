CC = g++
CFLAGS = -Wall -Wextra -Wno-unused-variable -Wpedantic -g


main.o: main.cpp
	$(CC) $(CFLAGS) -o main main.cpp
