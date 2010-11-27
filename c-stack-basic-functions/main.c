/*
* STACK Basic Functions
* main.c
* 
* Contributor(s): 
*   Clauber Stipkovic <clauber.halic@gmail.com>
*/
 
#include <stdio.h>
#include "stackbf.h"

#define MAXSTACK 4

int main() {
	_STACK_ pilha;
	int valor;
	
	initializeStackBF(&pilha, MAXSTACK);
	pushStackBF(&pilha, 4);
	if(getTopStackBF(pilha, &valor))
	    printf("\n%d\n", valor);
	return 0;
}
