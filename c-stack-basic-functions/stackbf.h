/*
* STACK Basic Functions
* stackbf.h
*
* Contributors: 
*   Clauber Stipkovic <clauber.halic@gmail.com>
*/
 
// TODO: At the main file, define the "MAXSTACK" variable to use the stack 
// basic functions
 
#ifndef STACKBF_H_
 
typedef struct stack{
	int topMax;
	int t;
	int *stack;
}_STACK_;
 
void initializeStackBF(_STACK_ *, int);
int isEmptyStackBF(_STACK_);
int isFullStackBF(_STACK_);
int sizeStackBF(_STACK_);
int pushStackBF(_STACK_ *, int);
int popStackBF(_STACK_ *);
int getTopStackBF(_STACK_, int *);
 
#define STACKBF_H_
 
#endif /* STACKBF_H_ */
