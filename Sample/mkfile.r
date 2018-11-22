app: main.o mod.o
	cc -o app main.o mod.o

main.o: main.c inc_a.h
	cc -c main.c

mod.o: mod.c inc_a.h
	cc -c mod.c
