CC = gcc
Makef = program

$(Makef) : main.o 2.o 8.o 10.o 16.o calculator.o
	$(CC) main.o 2.o 8.o 10.o 16.o calculator.o -o $(Makef)

main.o : main.c 
	$(CC) -c main.c -o main.o

2.o : 2.c
	$(CC) -c 2.c -o 2.o
8.o : 8.c
	$(CC) -c 8.c -o 8.o
10.o : 10.c
	$(CC) -c 10.c -o 10.o
16.o : 16.c
	$(CC) -c 16.c -o 16.o
calculator.o : calculator.c
	$(CC) -c calculator.c -o calculator.o

clean:
	rm $(Makef) *.o

run: program
	./program
