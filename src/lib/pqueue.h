#ifndef P_Q
#define P_Q
#include <stdlib.h>

typedef int comparator_func(void* a,void* b);


struct node
{
	void* elem;
	struct node* next;
	struct node* prev;
};

struct pqueue
{
	struct node* list;
	comparator_func* cmp;
};
#endif

struct pqueue* pqueue_init(comparator_func* func);
void pqueue_add(struct pqueue* queue,void* elem);
void* pqueue_remove(struct pqueue* queue);
void* pqueue_peek(struct pqueue* queue);

