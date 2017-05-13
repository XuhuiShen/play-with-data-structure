#include <stdio.h>
#define MAXSIZE 1000

typedef int element_type;

typedef struct {
	element_type data;
	int cur;
} component, static_link_list[MAXSIZE];

int init(static_link_list space)
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
		space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;

	return 0;
}

int malloc_sll(static_link_list space)
{
	int i = space[0].cur;

	if (space[0].cur)
		space[0].cur = space[i].cur;

	return i;
}
