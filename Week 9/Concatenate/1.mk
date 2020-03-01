a.out:1.o 2.o concatenate.h
	   gcc 1.o 2.o
1.o:1.c concatenate.h
	   gcc -c 1.c
2.o:2.c concatenate.h
	   gcc -c 2.c
