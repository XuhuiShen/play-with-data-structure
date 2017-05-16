#include <stdio.h>
#include <stdlib.h>

typedef int element_type_t;
typedef struct __queue_node {
	element_type_t data;
	struct __queue_node *next;
} queue_node_t;

typedef struct {
	queue_node_t *front;
	queue_node_t *rear;
} link_queue_t;

static int en_queue(link_queue_t *q, element_type_t e)
{
	queue_node_t *s = (queue_node_t *)malloc(sizeof(queue_node_t));
	if (!s)
		exit(-1);
	s->data = e;
	s->next = NULL;
	q->rear->next = s;
	q->rear = s;

	return 0;
}

static int de_queue(link_queue_t *q, element_type_t *e)
{
	queue_node_t *p;
	if (q->front == q->rear)
		return -1;
	p = q->front->next;
	*e = p->data;
	q->front->next = p->next;
	if (q->rear == p)
		q->rear = q->front;
	free(p);

	return 0;
}
