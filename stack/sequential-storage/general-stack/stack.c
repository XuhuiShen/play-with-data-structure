#include <stdio.h>
#define MAXSIZE 20

typedef int element_type_t;
typedef struct {
	element_type_t data[MAXSIZE];
	int top;
} sequential_stack_t;

static int push(sequential_stack_t *s, element_type_t e)
{
	if (s->top == MAXSIZE - 1)
		return -1;
	s->top++;
	s->data[s->top] = e;

	return 0;
}

static int pop(sequential_stack_t *s, element_type_t *e)
{
	if (s->top == -1) 	/* when stack is empty, set top to -1 */
		return -1;	/* when stack has only one element, set top to 0 */
	*e = s->data[s->top];
	s->top--;

	return 0;
}
