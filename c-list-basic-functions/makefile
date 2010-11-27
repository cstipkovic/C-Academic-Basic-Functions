# Clear old files
clear: main
	rm -r listbf.o listbf.h.gch

# Compile the main with the ListBF
main: listbf.o
	gcc main.c listbf.o -o main

# Compile the ListBF
listbf.o: listbf.c listbf.h
	gcc -c listbf.c listbf.h