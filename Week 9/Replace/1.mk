a.out:1.o 2.o Replace.h
	   gcc 1.o 2.o
1.o:1.c Replace.h
	   gcc -c 1.c
2.o:2.c Replace.h
	   gcc -c 2.c
