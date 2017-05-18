#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* The code here is a little difficult to understand. If you want to know the
 * detail, please feel free to follow my WeChat Official Account "CSMorningTalk",
 * and submit your questions to me.
 */
static void __get_next(char *pattern, int *next)
{
	int i = 1, j = 0;
	next[0] = 0;
	for (; i < strlen(pattern); i++) {
		if (j != 0 && pattern[i] != pattern[j])
			j = next[j - 1];
		if (pattern[i] == pattern[j])
			j++;
		next[i] = j;
	}
}

static void get_next(char *pattern, int *next)
{
	next[0] = -1;
	int j = 0;
	int i = -1;
	while (j < strlen(pattern) - 1) {
		if (i == -1 || pattern[j] == pattern[i]) {
			next[++j] = ++i;
		} else {
			i = next[i];
		}

	}
}
