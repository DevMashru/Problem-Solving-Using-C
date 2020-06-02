a.out:1.o 2.o Details.h
	gcc 1.o 2.o
1.o:1.c Details.h
	gcc -c 1.c
2.o:2.c Details.h
	gcc -c 2.c
