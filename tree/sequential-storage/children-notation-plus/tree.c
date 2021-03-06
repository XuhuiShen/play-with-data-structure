#include <stdio.h>
#define MAX_TREE_SIZE 100

typedef int element_type_t;

typedef struct __child_node {
	int child;
	struct __child_node *next;
} child_node_t;

typedef struct {
	element_type_t data;
	child_node_t *first_child;
} child_header_list_t;

typedef struct {
	child_header_list_t nodes[MAX_TREE_SIZE];
	int r, n;
} tree_t;
