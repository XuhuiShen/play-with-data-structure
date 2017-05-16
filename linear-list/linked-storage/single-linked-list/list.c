#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int element_type_t;

typedef struct __list_node_t {
	element_type_t data;
	struct __list_node_t *next;
} list_node_t;

typedef list_node_t *link_list_t;
static int get_element(link_list_t l, int i, element_type_t *e)
{
	list_node_t *p;
	p = l->next;
	int j;
	for (j = 1; p && j < i; j++)
		p = p->next;
	if (!p || j > i)
		return -1;
	*e = p->data;

	return 0;
}

static int insert_element(link_list_t *l, int i, element_type_t e)
{
	list_node_t *p, *s;
	p = *l;
	int j;
	for (j = 1; p && j < i; j++)
		p = p->next;
	if (!p || j > i)
		return -1;
	s = (list_node_t *)malloc(sizeof(list_node_t));
	s->data = e;
	s->next = p->next;
	p->next = s;

	return 0;
}

static int delete_element(link_list_t *l, int i, element_type_t *e)
{
	list_node_t *p, *q;
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
static void create_list_head_insert(link_list_t *l, int n)
{
	list_node_t *p;
	int i;
	srand(time(0));
	*l = (link_list_t)malloc(sizeof(list_node_t));
	(*l)->next = NULL;
	for (i = 0; i < n; i++) {
		p = (link_list_t)malloc(sizeof(list_node_t));
		p->data = rand() % 100 + 1;
		p->next = (*l)->next;
		(*l)->next = p;
	}
}

static void create_list_tail_insert(link_list_t *l, int n)
{
	list_node_t *p;
	int i;
	srand(time(0));
	*l = (link_list_t)malloc(sizeof(list_node_t));
	list_node_t *r = *l;
	for (i = 0; i < n; i++) {
		p = (link_list_t)malloc(sizeof(list_node_t));
		p->data = rand() % 100 + 1;
		r->next = p;
		r = p;
	}
	r->next = NULL;
}

static int clear_list(link_list_t *l)
{
	list_node_t *p, *q;
	p = (*l)->next;

	while (p) {
		q = p->next;
		free(p);
		p = q;
	}
	(*l)->next = NULL;

	return 0;
}
