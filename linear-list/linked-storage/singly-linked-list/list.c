#include <stdio.h>

typedef int element_type;

typedef struct node {
	element_type data;
	struct node *next;
} node;

typedef struct node *link_list;

int get_element(link_list l, int i, element_type *e)
{
	link_list p;
	p = l->next;
	int j;
	for (j = 1; p && j < i; j++)
		p = p->next;
	if (!p || j > 1)
		return -1;
	*e = p->data;
	return 0;
}
