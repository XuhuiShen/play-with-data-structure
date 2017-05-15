#include <stdio.h>
#include <unit_test.h>
#include <../stack.c>

sequential_stack_t s;

void print_stack()
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
		printf("sequential_stack: %d\n", s.data[i]);
}

int unit_test_init()
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
		s.data[i] = i;
	s.top = MAXSIZE - 1;

	return 0;
}

unit_test(test_pop)
{
	unit_test_init();
	element_type e = 0;
	int i;
	for (i = 0; i < MAXSIZE; i++) {
		pop(&s, &e);
		test_assert(e == MAXSIZE -1 - i);
	}
}

unit_test(test_push)
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
		push(&s, i);
	for (i = 0; i < MAXSIZE; i++)
		test_assert(s.data[i] == i);
}

test_file_end
