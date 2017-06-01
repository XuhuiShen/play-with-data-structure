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
	if (!tree->rchild) {
		tree->rtag = thread;
		tree->rchild = pre;
	}
	pre = tree;
	in_order_thread(tree->lchild);
}
