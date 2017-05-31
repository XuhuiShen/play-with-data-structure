#include <stdio.h>

typedef int element_type_t;

typedef struct __node {
	element_type_t data;
	struct __node *first_child;
	struct __node *right_sibling;
} node_t;

node_t *tree;
