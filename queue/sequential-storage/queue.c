#include <stdio.h>
#define MAXSIZE 20

typedef int element_type;

typedef struct {
	element_type data[MAXSIZE];
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

static int en_queue(sequential_queue_t *q, element_type e)
{

}
