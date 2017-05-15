#include <stdio.h>
#include <unit_test.h>
#include <../stack.c>

sequential_stack s;

void print_stack()
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
		printf("sequential_stack: %d\n", s->data[i]);
}

int unit_test_init()
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
		s->data[i] = i;
}

unit_test(test_pop)
{
	unit_test_init();
}

test_file_end
