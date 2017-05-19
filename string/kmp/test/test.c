#include <stdio.h>
#include <unit_test.h>
#include <../kmp.c>

void get_next(char *pattern, int *next);
static void print_next(char *pattern, int *next)
{
	int i;
	for (i = 0; i < strlen(pattern); i++)
		printf("next array  %d elements are: %d\n", i, *(next + i));
}

unit_test(test_get_next)
{
	char *p = "accaaaba";
	int next[strlen(p)];
	get_next(p, next);
	print_next(p, next);

	char *s = "ccaaccaaabanxsae";
	int pos = kmp(s, p, 0);
	printf("pos is: %d\n", pos);
}

test_file_end
