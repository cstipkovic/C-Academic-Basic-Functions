# Clear old files
clear: main
	rm -r stackbf.o stackbf.h.gch 
#.*.swp .*.swo

# Compile the main with the StackBF
main: stackbf.o
	gcc main.c stackbf.o -o main

# Compile the StackBF
stackbf.o: stackbf.c stackbf.h
	gcc -c stackbf.c stackbf.h
