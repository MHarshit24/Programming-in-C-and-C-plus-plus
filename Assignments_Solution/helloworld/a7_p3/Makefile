all: main

main: use_linked_list.o linked_list.o
	gcc -Wall -o main use_linked_list.o linked_list.o
	
use_linked_list.o: use_linked_list.c linked_list.h
	gcc -Wall -c use_linked_list.c linked_list.h

linked_list.o: linked_list.h linked_list.c
	gcc -Wall -c linked_list.c linked_list.h
	
compileonly: use_linked_list.o linked_list.o

deleteofiles:
	rm -f *.o
	rm -f *.gch
	
deleteexec:
	rm -f main	

deleteall: deleteexec deleteofiles