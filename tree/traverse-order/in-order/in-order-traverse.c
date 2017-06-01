#include <stdio.h>

void in_order_traverse(node_t *tree)
{
	if (tree == NULL)
		return;
	in_order_traverse(tree->lchild);
	/* you can change printf to any operations you want */
	printf("%d\n", tree->data);
	in_order_traverse(tree->rchild);
}
