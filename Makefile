CCFLAGS = -O
CC = g++
SRC = main.cpp song.cpp
OBJ = $(SRC:.cpp = .o)
Haiku: $(OBJ)
	$(CC) $(CFLAGS) -o Haiku $(OBJ)
clean:
	rm -f core *.o <Paste>
