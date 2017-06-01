#include "./tree.c"

int in_order_traverse(node_t tree)
{
	node_t p;
	p = tree->lchild;
	while (p != tree) {
		while (p->ltag == link)
			p = p->lchild;
		printf("%c", p->data);
		while (p->rtag == thread && p->rchild != tree) {
			p = p->rchild;
			printf("%c", p->data);
		}
		p = p->rchild;
	}
	return 0;
}
