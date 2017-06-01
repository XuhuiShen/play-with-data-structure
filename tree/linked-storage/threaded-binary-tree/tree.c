#include <stdio.h>

typedef int element_type_t;

typedef enum {
	link = 0,
	thread
} pointer_tag_t;

typedef struct __node {
	element_type_t data;
	struct __node *lchild;
	struct __node *rchild;
	pointer_tag_t ltag;
	pointer_tag_t rtag;
} node_t;

node_t *tree;
