#include <stdio.h>

typedef int element_type;

typedef struct node {
	element_type data;
	struct node *next;
} node;

typedef struct node *link_list_node;

int get_element(link_list_node l, int i, element_type *e)
{
	link_list_node p;
	p = l->next;
	int j;
	for (j = 1; p && j < i; j++)
		p = p->next;
	if (!p || j > i)
		return -1;
	*e = p->data;
	return 0;
}

int insert_element(link_list_node *l, int i, element_type e)
{
	link_list_node p, s;
	p = *l;
	int j;
	for (j = 1; p && j < i; j++)
		p = p->next;
	if (!p || j > i)
		return -1;
	s = (link_list_node)malloc(sizeof(node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return 0;
}
