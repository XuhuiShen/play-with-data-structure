#include <stdio.h>
#include "../linked-storage/binary-search-tree/tree.c"

void create_tree(node_t *tree)
{
	element_type_t data;
	scanf("%c", &data);
	if (data == '#') {
		tree = NULL;
	} else {
		tree = (node_t *)malloc(sizeof(node_t));
		if (!tree)
			exit(-1);
		tree->data = data;
		create_tree(tree->lchild);
		create_tree(tree->rchild);
	}
}
