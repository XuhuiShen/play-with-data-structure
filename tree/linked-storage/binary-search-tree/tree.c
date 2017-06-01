#include <stdio.h>

typedef int element_type_t;

typedef struct __node {
	element_type_t data;
	struct __node *lchild;
	struct __node *rchild;
} node_t;

typedef struct __node_plus {
	element_type_t data;
	struct __node_plus *lchild;
	struct __node_plus *rchild;
	struct __node_plus *parent;
} node_plus_t;

node_t *node;
node_t *tree;
node_plus_t *node_plus;
node_plus_t *tree_plus;
