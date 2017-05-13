#include <stdio.h>

typedef int element_type;

typedef struct node {
	element_type data;
	struct node *next;
} node;

typedef struct node *link_list;
