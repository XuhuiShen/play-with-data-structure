#include <stdio.h>
#include <unit_test.h>
#include <../kmp.c>

static void print_next(char *pattern, int *next)
{
	int i;
	for (i = 0; i < strlen(pattern); i++)
		printf("next array  %d elements are: %d\n", i, *(next + i));
}

unit_test(test_get_next)
{
	char *s = "ababaaaba";
	int next[strlen(s)];
	get_next(s, next);
	print_next(s, next);
}

test_file_end
