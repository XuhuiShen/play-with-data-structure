#include <stdio.h>
#include <unit_test.h>
#include <../list.c>

link_list l;

void print_list()
{
	node *p;
	p = l->next;
	while (p) {
		printf("%d\n", p->data);
		p = p->next;
	}
}

void create_test_list(int n)
{
	node *p;
	int i;
	l = (link_list)malloc(sizeof(node));
	l->next = NULL;
	for (i = 0; i < n; i++) {
		p = (link_list)malloc(sizeof(node));
		p->data = i + 1;
		p->next = l->next;
		l->next = p;
	}
	print_list();
}

unit_test(test_create_test_list)
{
	create_test_list(20);
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
