/*
 * STACK Basic Functions
 * stackbf.c
 *
 * Contributors:
 *   Clauber Stipkovic <clauber.halic@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "stackbf.h"

// Initialize Stack
void initializeStackBF(_STACK_ *p, int MAXSTACK) {
	p->topMax = MAXSTACK;
	p->stack = (int *)malloc(sizeof(int) *MAXSTACK);
	p->t = -1;
}

// Verifie if the Stack is Empty
int isEmptyStackBF(_STACK_ p) {
	if(p.t == -1)
		return 1;
	return 0;
}

// Verifies if the Stack is Full
int isFullStackBF(_STACK_ p) {
	if(sizeStackBF(p) == p.topMax)
		return 1;
	return 0;
}

// Returns the size of Stack
int sizeStackBF(_STACK_ p) {
	return (p.t + 1);
}

// Push a number at the Stack
int pushStackBF(_STACK_ *p, int number) {
	if(p->t + 1 < p->topMax) {
		p->t = p->t + 1;
		p->stack[p->t] = number;
		return 1;
	} else {
		return 0;
	}
}

// Pop the top of the stack
int popStackBF(_STACK_ *p) {
	if(p->t != -1) {
		p->t = p->t - 1;
		return 1;
	} else {
		return 0;
	}
}

// Returns only the top of the stack if exists
int getTopStackBF(_STACK_ p, int *result) {
	if(p.t != -1) {
		*result = p.stack[p.t];
		return 1;
	}
	return 0;
}
