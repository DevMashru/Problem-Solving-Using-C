a.out:1.o 2.o substring.h
	   gcc 1.o 2.o
1.o:1.c substring.h
	   gcc -c 1.c
2.o:2.c substring.h
	   gcc -c 2.c
