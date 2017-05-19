#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* The code here is a little difficult to understand. If you want to know the
 * detail, please feel free to follow my WeChat Official Account "CSMorningTalk",
 * and submit your questions to me.
 */
static void get_next(char *pattern, int *next)
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

static void __get_next(char *pattern, int *next)
{
	next[0] = -1;
	int i = 0;
	int j = -1;
	while (i < strlen(pattern) - 1) {
		if (j == -1 || pattern[i] == pattern[j]) {
			next[++i] = ++j;
		} else {
			j = next[j];
		}

	}
}

static int kmp(char *string, char *pattern, int pos)
{
	int next[strlen(pattern)];
	get_next(pattern, next);
	int i = pos, j = 0;
	while (i <= strlen(string) && j <= strlen(pattern)) {
		if (j == -1 || string[i] == pattern[j]) {
			++i;
			++j;
		} else {
			j = next[j];
		}
	}
	if (j > strlen(pattern)) {
		return i - strlen(pattern);
	} else {
		return 0;
	}
}
