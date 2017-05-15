#include <stdio.h>

typedef int element_type;

typedef struct {
	element_type data;
	struct node_t *next;
} node_t;

typedef struct {
	node_t *top;
	int conut;
} link_stack_t;

static inline int empty(link_stack_t *s)
{
	if (s->top == NULL)
		return 1;
	return 0;
}

static int push(link_stack_t *s, element_type e)
{
	node_t *p = malloc(sizeof(node_t));
	p->data = e;
	p->next = s->top;
	s->top = p;
	s->conut++;

	return 0;
}

static int pop(link_stack_t *s, element_type *e)
{
	if (empty(s))
		return -1;
	*e = s->top->data;
	node_t *p = s->top;
	s->top = s->top->next;
	free(p);
	s->conut--;

	return 0;
}
