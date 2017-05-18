#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* The code here is a little difficult to understand. If you want to know the
 * detail, please feel free to follow my WeChat Official Account "CSMorningTalk",
 * and submit your questions to me.
 */
static void get_next(char *pattern, int *next)
{
	int i = 0, j = -1;
	next[0] = 0;

	while (i < strlen(pattern)) {
		if (j == -1 || pattern[i] == pattern[j]) {
			next[i] = ++j;
			i++;
		} else {
			j = next[j - 1];
		}
	}
}
