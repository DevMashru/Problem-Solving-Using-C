a.out:1.o 2.o Pascal.h
	gcc 1.o 2.o
1.o:1.c Pascal.h
	gcc -c 1.c
2.o:2.c Pascal.h
	gcc -c 2.c
