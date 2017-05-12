#define MAXSIZE 20

typedef int element_type

typedef struct {
	element_type data[MAXSIZE];
	int length;
} sequential_list;

int get_element(sequential_list l, int i, element_type *e)
{
	if (l.length == 0 || i > l.length)
		return -1;
	*e = l.data[i - 1];
	return 0;
}
