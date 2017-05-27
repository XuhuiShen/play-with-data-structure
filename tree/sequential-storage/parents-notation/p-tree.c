#include <stdio.h>
#define MAX_TREE_SIZE 100

typedef int element_type_t;

typedef struct __pt_node {
	element_type_t data;
	int parent;
} pt_node_t;

typedef struct {
	pt_node_t nodes[MAX_TREE_SIZE];
	int r, n;
} p_tree;
