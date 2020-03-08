a.out:1.o 2.o Spiral.h
	gcc 1.o 2.o
1.o:1.c Spiral.h
	gcc -c 1.c
2.o:2.c Spiral.h
	gcc -c 2.c
