#include <stdio.h>
#include <unit_test.h>
#include <../list.c>

static_link_list_t l;

void print_list()
{
	int i = l[MAXSIZE - 1].cur;
	while (i) {
		i = l[i].cur;	/* end of the list cur of node is 0 */
		printf("%d\n", l[i].data);
	}
}

/* unit_test(test_get_element) */
/* { */
/* 	create_test_list(20); */
/* 	int i; */
/* 	element_type e = 0; */
/* 	while () { */
/* 		get_element(l, i, &e); */
/* 		//test_assert(e == i); */
/* 	} */
/* } */

/* test design: you can print all list elements to a file, */
/* and compare result with the expected output using bash. */
/* ↓ is not a good test example. */

/* unit_test(test_insert_element) */
/* { */
/* 	create_test_list(20); */
/* 	int i = 5; */
/* 	element_type insert_element = 666; */
/* 	element_type get_element; */
/* 	insert_element(l, i, insert_element); */
/* 	get_element(l, i, &get_element); */
/* 	test_assert(get_element == insert_element); */
/* } */

test_file_end
