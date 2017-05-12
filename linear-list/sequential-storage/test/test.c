#include <stdio.h>
#include <unit_test.h>
#include <../list.c>

sequential_list l;

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
	element_type e = 0;
	for (i = 1; i <= l.length; i++) {
		get_element(l, i, &e);
		test_assert(e == i);
	}
}

// test design: you can print all list element to a file,
// and compare result using bash. ↓ is not a good test example.
unit_test(test_insert_element)
{
	unit_test_init();
	int i = 5;
	element_type insert_e = 666;
	element_type get_e;
	insert_element(&l, i, insert_e);
	get_element(l, i, &get_e);
	test_assert(get_e == insert_e);
}

test_file_end
