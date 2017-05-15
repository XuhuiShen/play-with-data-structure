#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int element_type;

typedef struct node {
	element_type data;
	struct node *next;
} node;

typedef struct node *link_list;

static int get_element(link_list l, int i, element_type *e)
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

static int insert_element(link_list *l, int i, element_type e)
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

static int delete_element(link_list *l, int i, element_type *e)
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

/* Establishing a list which has lead node and random value of elements. */
static void create_list_head_insert(link_list *l, int n)
{
	node *p;
	int i;
	srand(time(0));
	*l = (link_list)malloc(sizeof(node));
	(*l)->next = NULL;
	for (i = 0; i < n; i++) {
		p = (link_list)malloc(sizeof(node));
		p->data = rand() % 100 + 1;
		p->next = (*l)->next;
		(*l)->next = p;
	}
}

static void create_list_tail_insert(link_list *l, int n)
{
	node *p;
	int i;
	srand(time(0));
	*l = (link_list)malloc(sizeof(node));
	node *r = *l;
	for (i = 0; i < n; i++) {
		p = (link_list)malloc(sizeof(node));
		p->data = rand() % 100 + 1;
		r->next = p;
		r = p;
	}
	r->next = NULL;
}

static int clear_list(link_list *l)
{
	node *p, *q;
	p = (*l)->next;

	while (p) {
		q = p->next;
		free(p);
		p = q;
	}
	(*l)->next = NULL;

	return 0;
}
