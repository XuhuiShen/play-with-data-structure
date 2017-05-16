#include <stdio.h>
#include <stdlib.h>

typedef int element_type_t;

typedef struct __stack_node_t {
	element_type_t data;
	struct __stack_node_t *next;
} stack_node_t;

typedef struct {
	stack_node_t *top;
	int conut;
} link_stack_t;

static inline int stack_empty(link_stack_t *s)
{
	if (s->top == NULL)
		return 1;
	return 0;
}

static int push(link_stack_t *s, element_type_t e)
{
	stack_node_t *p = malloc(sizeof(stack_node_t));
	p->data = e;
	p->next = s->top;
	s->top = p;
	s->conut++;

	return 0;
}

static int pop(link_stack_t *s, element_type_t *e)
{
	if (stack_empty(s))
		return -1;
	*e = s->top->data;
	stack_node_t *p = s->top;
	s->top = s->top->next;
	free(p);
	s->conut--;

	return 0;
}
