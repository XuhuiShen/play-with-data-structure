#include <stdio.h>

void pre_order_traverse(node_t *tree)
{
	if (tree == NULL)
		return;
	/* you can change printf to any operations you want */
	printf("%d\n", tree->data);
	pre_order_traverse(tree->lchild);
	pre_order_traverse(tree->rchild);
}
