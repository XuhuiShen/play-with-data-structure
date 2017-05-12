#include <stdio.h>
#include <unit_test.h>
#include <../list.c>

sequential_list l;

int unit_test_init()
{
	l.length = MAXSIZE;
	int i;
	for (i = 0; i < l.length; i++)
		l.data[i] = i + 1;
	return 0;
}

unit_test(test_get_element)
{
	int i;
	element_type e = 0;
	for (i = 0; i < l.length; i++) {
		get_element(l, i, &e);
		test_assert(e == i + 1);
	}
}

test_file_end
