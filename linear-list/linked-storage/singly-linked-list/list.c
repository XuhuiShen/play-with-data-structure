#include <stdio.h>

typedef int element_type;

typedef struct node {
	element_type data;
	struct node *next;
} node;

typedef struct node *link_list;

int get_element(link_list l, int i, element_type *e)
{
	node *p;
	p = l->next;
	int j;
	for (j = 1; p && j < i; j++)
		p = p->next;
	if (!p || j > i)
		return -1;
	*e = p->data;

	return 0;
}

int insert_element(link_list *l, int i, element_type e)
{
	node *p, *s;
	p = *l;
	int j;
	for (j = 1; p && j < i; j++)
		p = p->next;
	if (!p || j > i)
		return -1;
	s = (node *)malloc(sizeof(node));
	s->data = e;
	s->next = p->next;
	p->next = s;

	return 0;
}

int delete_element(link_list *l, int i, element_type *e)
{
	node *p, *q;
	p = *l;
	int j;
	for (j = 1; p && j < i; j++)
		p = p->next;
	if (!(p->next) || j > i)
		return -1;
	q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);

	return 0;
}
