/**
 *  LIST Basic Functions
 *  listbf.h
 *
 *  Contributor(s): 
 *	Clauber Stipkovic <clauber.halic@gmai.com>
 * */

#ifndef LISTBF_H_

typedef struct node{
	int number;
	struct node *next;
}*_NODE_;

int insertNodeListBF(_NODE_ *, int);
int removeNodeListBF(_NODE_, int);
#define LISTBF_H_

#endif /* LISTBF_H_ */