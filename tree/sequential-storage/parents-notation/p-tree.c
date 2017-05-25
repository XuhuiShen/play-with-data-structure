#include <stdio.h>
#define MAX_TREE_SIZE 100

typedef int element_type;

typedef struct __pt_node {
	element_type data;
	int parent;
} pt_node;

typedef struct {
	pt_node nodes[MAX_TREE_SIZE];
	int r, n;
} p_tree;
