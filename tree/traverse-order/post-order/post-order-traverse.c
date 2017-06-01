#include <stdio.h>

void post_order_traverse(node_t *tree)
{
	if (tree == NULL)
		return;
	post_order_traverse(tree->lchild);
	post_order_traverse(tree->rchild);
	/* you can change printf to any operations you want */
	printf("%d\n", tree->data);
}
