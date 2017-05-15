#include <stdio.h>
#define MAXSIZE 20

typedef int element_type;
typedef struct {
	element_type data[MAXSIZE];
	int top1;
	int top2;
} sequential_double_stack;

/* stack_number means which stack you want to push. */
static int push(sequential_double_stack *s, element_type e, int stack_number)
{
	if (s->top1 + 1 == s->top2)
		return -1;
	if (stack_number == 1)
		s->data[++s->top1] = e;
	else if (stack_number == 2)
		s->data[--s->top2] = e;
	return 0;
}

static int pop(sequential_double_stack *s, element_type *e, int stack_number)
{
	if (s->top1 == -1 && s->top2 == MAXSIZE)
		return -1;
	if (stack_number == 1)
		*e = s->data[s->top1--];
	else if (stack_number == 2)
		*e = s->data[s->top2++];

	return 0;
}
