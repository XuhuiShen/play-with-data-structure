#include <stdio.h>
#define MAX_TREE_SIZE 100

typedef int element_type_t;

typedef struct __node {
	element_type_t data;
	int parent;
} node_t;

typedef struct {
	node_t nodes[MAX_TREE_SIZE];
	int r, n;
} tree_t;
