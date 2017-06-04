#include <stdio.h>
#define MAXSIZE 20

typedef int element_type_t;

typedef struct {
	element_type_t data[MAXSIZE];
	int front;
	int rear;
} sequential_queue_t;

static inline int init_queue(sequential_queue_t *q)
{
	q->front = 0;
	q->rear = 0;

	return 0;
}

static inline int queue_length(sequential_queue_t q)
{
	return (q.rear - q.front + MAXSIZE) % MAXSIZE;
}

static int en_queue(sequential_queue_t *q, element_type_t e)
{
	if ((q->rear + 1) % MAXSIZE == q->front) /* queue is full */
		return -1;
	q->data[q->rear] = e;
	q->rear = (q->rear + 1) % MAXSIZE;

	return 0;
}

static int de_queue(sequential_queue_t *q, element_type_t *e)
{
	if (q->front == q->rear) /* if condition is satisfied, queue is empty */
		return -1;
	*e = q->data[q->front];
	q->front = (q->front + 1) % MAXSIZE;

	return 0;
}
