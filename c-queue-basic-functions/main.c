/**
 *  QUEUE Basic Functions
 *  main.c
 *
 *  Contributor(s):
 *	Clauber Stipkovic <clauber.halic@gmail.com>
 *
 * */

#include <stdio.h>
#include "queuebf.h"

#ifndef MAXQUEUE
#define MAXQUEUE 1
#endif

int main (int argc, char const *argv[])
{
	/* code */
	_QUEUE_ fila;
		
	initializeQueueBF(&fila, MAXQUEUE);
	enQueueBF(&fila, 2, MAXQUEUE);
	printf("%s\n", );
	
	return 0;
}