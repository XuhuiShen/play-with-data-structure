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

int en_queue(link_queue_t *q, element_type_t e)
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
