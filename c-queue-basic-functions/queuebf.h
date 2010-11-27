/**
 *  QUEUE Basic Functions
 *  queuebf.h
 *
 *  Contributor(s):
 *	Clauber Stipkovic <clauber.halic@gmail.com>
 *
 * */

//  TODO: At the main file, define the "MAXQUEUE" variable to use the queue 
//  basic functions

#ifndef QUEUEBF_H_

typedef struct queue
{
    int front, rear, qtItems;
    int *queue;
} _QUEUE_;

void initializeQueueBF(_QUEUE_ *, int);
int isEmptyQueueBF(_QUEUE_);
int isFullQueueBF(_QUEUE_, int);
int enQueueBF(_QUEUE_ *, int, int);
int deQueueBF(_QUEUE_ *, int, int);

#define QUEUEBF_H_

#endif /* QUEUEBF_H_ */
