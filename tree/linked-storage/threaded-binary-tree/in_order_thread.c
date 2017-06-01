#include "./tree.c"

node_t *pre;

void in_order_thread(node_t *tree)
{
	if (tree == NULL)
		return;
	in_order_thread(tree->lchild);
	if (!tree->lchild) {
		tree->ltag = thread;
		tree->lchild = pre;
	}
	if (!pre->rchild) {
		pre->rtag = thread;
		pre->rchild = tree;
	}
	pre = tree;
	in_order_thread(tree->lchild);
}
