all:	 main.o vector.o
	gcc main.o vector.o -o program
main.o: main.c vector.h
	gcc  -c main.c
vector.o: vector.c vector.h
	gcc  -c vector.c
clean:
	rm *.o
