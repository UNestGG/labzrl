CC = gcc
Makefile = program

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

$(Makefile) : $(OBJ)
	$(CC) $(OBJ) -o $(Makefile)

%.o : %.c
	$(CC) -c $< -o $@

clean:
	rm $(Makefile) *.o

run: program
	./program
