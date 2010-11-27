/**
 *  QUEUE Basic Functions
 *  queuebf.h
 *
 *  Contributor(s):
 *	Clauber Stipkovic <clauber.halic@gmail.com>
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include "queuebf.h"

// Inicitialize Queue
void initializeQueueBF(_QUEUE_ *f, int MAXQUEUE)
{
	f->queue = (int *)malloc(sizeof(int) *MAXQUEUE);
	f->qtItems = 0;
	f->front = 0;
	f->rear = 0;
}

// Verifie if the queue is empty
int isEmptyQueueBF(_QUEUE_ f)
{
	if(f.qtItems == 0)
		return 1;
	return 0;
}

// Verifie if the queue is full
int isFullQueueBF(_QUEUE_ f, int MAXQUEUE)
{
	if(f.qtItems == MAXQUEUE)
		return 1;
	return 0;
}

// Enqueue an integer element
int enQueueBF(_QUEUE_ *f, int element, int MAXQUEUE)
{
	if(isFullQueueBF(*f, MAXQUEUE) == 0) {
		f->queue[f->rear] = element;
		f->rear++;
		f->qtItems++;
		return 1;
	}
	return 0;
}

// Dequeu an integer element
int deQueueBF(_QUEUE_ *f, int element, int MAXQUEUE)
{
	if(isEmptyQueueBF(*f) == 0)
	{
		f->front++;
		return 1;
	}
	return 0;
}