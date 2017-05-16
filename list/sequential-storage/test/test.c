#include <stdio.h>
#include <unit_test.h>
#include <../list.c>

sequential_list_t l;

void print_list()
{
	int i;
	for (i = 0; i < l.length; i++)
		printf("%d\n", l.data[i]);
}

int unit_test_init()
{
	l.length = MAXSIZE - 1;
	int i;
	for (i = 0; i < l.length; i++)
		l.data[i] = i + 1;
	return 0;
}

unit_test(test_get_element)
{
	unit_test_init();
	int i;
	element_type_t e = 0;
	for (i = 1; i <= l.length; i++) {
		get_element(l, i, &e);
		test_assert(e == i);
	}
}

/* test design: you can print all list elements to a file, */
/* and compare result with the expected output using bash. */
/* ↓ is not a good test example. */
unit_test(test_insert_element)
{
	unit_test_init();
	int i = 5;
	element_type_t i_e = 666;
	element_type_t g_e = 0;
	insert_element(&l, i, i_e);
	get_element(l, i, &g_e);
	test_assert(g_e == i_e);
}

test_file_end
