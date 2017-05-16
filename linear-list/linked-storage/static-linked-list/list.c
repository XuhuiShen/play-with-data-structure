#include <stdio.h>
#define MAXSIZE 1000

typedef int element_type_t;

typedef struct {
	element_type_t data;
	int cur;
} static_link_list_t[MAXSIZE];

static inline int list_init(static_link_list_t space)
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
		space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;

	return 0;
}

static inline int malloc_sll(static_link_list_t space)
{
	int i = space[0].cur;

	if (space[0].cur)
		space[0].cur = space[i].cur;

	return i;
}

static inline void free_ssl(static_link_list_t space, int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
}

static int list_length(static_link_list_t l)
{
	int j = 0;
	int i = l[MAXSIZE - 1].cur;
	while (i) {
		i = l[i].cur;
		j++;
	}
	return j;
}

static int insert_element(static_link_list_t l, int i, element_type_t e)
{
	int j, k, m;
	k = MAXSIZE - 1;
	if (i < 1 || i > list_length(l) + 1)
		return -1;
	j = malloc_sll(l);
	if (j) {
		l[j].data = e;
		for (m = 1; m <= i - 1; m++)
			k = l[k].cur;
		l[j].cur = l[k].cur;
		l[k].cur = j;
		return 0;
	}
	return -1;
}

static int delete_element(static_link_list_t l, int i)
{
	int j, k;
	if (i < 1 || i > list_length(l))
		return -1;
	k = MAXSIZE - 1;
	for (j = 1; j <= i - 1; j++)
		k = l[k].cur;
	j = l[k].cur;
	l[k].cur = l[j].cur;
	free_ssl(l, j);

	return 0;
}
