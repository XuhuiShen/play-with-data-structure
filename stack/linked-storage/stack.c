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

static int empty(link_stack *s)
{
	if (s->top == NULL)
		return 1;
	return 0;
}

static int push(link_stack *s, element_type e)
{
	node *p = malloc(sizeof(node));
	p->data = e;
	p->next = s->top;
	s->top = p;
	s->conut++;

	return 0;
}

static int pop(link_stack *s, element_type *e)
{
	if (empty(s))
		return -1;
	*e = s->top->data;
	node *p	= s->top;
	s->top = s->top->next;
	free(p);
	s->conut--;

	return 0;
}
