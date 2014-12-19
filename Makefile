pseudo: pseudo.o
	gcc pseudo.o -o pseudo

pseudo.o: pseudo.c
	gcc -c pseudo.c
