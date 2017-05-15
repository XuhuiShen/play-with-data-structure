#include <stdio.h>
#define MAXSIZE 20

typedef int element_type;
typedef struct {
	element_type data[MAXSIZE]
	int top;
} sequential_stack;

int push(sequential_stack *s, element_type e)
{
	if (s->top == MAXSIZE - 1)
		return -1;
	s->top++;
	s->data[s->top] = e;

	return 0;
}
