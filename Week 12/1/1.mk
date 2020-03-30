a.out:Client.o Server.o Server.h
	gcc Client.o Server.o
Client.o:Client.c Server.h
	gcc -c Client.c
Server.o:Server.c Server.h
	gcc -c Server.c
