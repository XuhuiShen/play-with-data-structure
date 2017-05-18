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
	char *s0 = "aaaaab";
	int *next = malloc(strlen(s) * sizeof(*next));
	printf("hello world!\n");
	get_next(s, next);
	printf("hello world!\n");
	print_next(s, next);
	printf("hello world!\n");
}

test_file_end
