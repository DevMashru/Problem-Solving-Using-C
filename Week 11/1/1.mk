a.out:1.o 2.o Date.h
	gcc 1.o 2.o
1.o:1.c Date.h
	gcc -c 1.c
2.o:2.c Date.h
	gcc -c 2.c
