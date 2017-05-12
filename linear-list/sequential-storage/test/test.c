#include <stdio.h>
#include <unit_test.h>
#include <../main.c>

sequential_list l;

int unit_test_init()
{
	l.length = MAXSIZE;
	int i;
	for (i = 0; i < l.length; i++)
		l.data[i] = i + 1;
}

unit_test(test_get_element)
{
	int a = 1;
	printf("test a = %d\n", a);
	test_assert(a == 1);
}

test_file_end
