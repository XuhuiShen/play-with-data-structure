#include <stdio.h>

typedef int element_type;

struct node {
	element_type data;
	struct node *next;
};

struct link_stack {
	node *top;
	int conut;
};

int empty(link_stack *s)
{
	if (s->top == NULL)
		return 1;
	return 0;
}

int push(link_stack *s, element_type e)
{
	node *n = malloc(sizeof(node));
	n->data = e;
	n->next = s->top;
	s->top = n;
	s->conut++;

	return 0;
}

int pop(link_stack *s, element_type *e)
{
	node *p;
	if ()
}
