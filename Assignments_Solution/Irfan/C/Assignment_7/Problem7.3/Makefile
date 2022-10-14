all: main

#solution for problem 2
main: linked_list.o use_linked_list.o
	gcc -Wall -o main linked_list.o use_linked_list.o

linked_list.o: linked_list.c linked_list.h
	gcc -Wall -c linked_list.c linked_list.h

use_linked_list.o: use_linked_list.c linked_list.h
	gcc -Wall -c use_linked_list.c linked_list.h

#solution for problem 1
makeos: linked_list.o use_linked_list.o

delos:
	rm -f *.o

delmain:
	rm -f main

delgchs:
	rm -f *.gch

#solution for problem 3
delall: delos delmain delgchs