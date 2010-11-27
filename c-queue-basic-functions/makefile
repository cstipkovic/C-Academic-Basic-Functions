# Clear old files
clear: main
	rm -r queuebf.o queuebf.h.gch

# Compile the main with the QueueBF
main: queuebf.o
	gcc main.c queuebf.o -o main

# Compile the QueueBF
queuebf.o: queuebf.c queuebf.h
	clear
	gcc -c queuebf.c queuebf.h 
