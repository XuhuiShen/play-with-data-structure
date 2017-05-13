#include <stdio.h>
#define MAXSIZE 20

typedef int element_type;

typedef struct {
	element_type data[MAXSIZE];
	int length;
} sequential_list;

int get_element(sequential_list l, int i, element_type *e)
{
	if (l.length == 0 || i > l.length)
		return -1;
	*e = l.data[i - 1];

	return 0;
}

int insert_element(sequential_list *l, int i, element_type e)
{
	int j = 0;
	if (l->length == MAXSIZE)
		return -1;
	if (i < 1 || i > l->length + 1)
		return -1;
	if (i <= l->length) {
		for (j = l->length - 1; j >= i - 1; j--)
			l->data[j + 1] = l->data[j];
	}
	l->data[i - 1] = e;
	l->length++;

	return 0;
}

int delete_element(sequential_list *l, int i, element_type *e)
{
	int j = 0;
	if (l->length == 0)
		return -1;
	if (i < 1 || i > l->length)
		return -1;
	*e = l->data[i - 1];
	if (i < l->length) {
		for (j = i; j < l->length; j++)
			l->data[j - 1] = l->data[j];
	}
	l->length--;

	return 0;
}
