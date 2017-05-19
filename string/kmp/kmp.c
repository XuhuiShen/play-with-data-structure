#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* The code here is a little difficult to understand. If you want to know the
 * detail, please feel free to follow my WeChat Official Account "CSMorningTalk",
 * and submit your questions to me.
 */
void get_next(char *pattern, int *next) /* FIXME: sometime will the result is wrong. */
{
	int i = 1, j = 0;
	next[0] = 0;
	next[1] = 0;

	while (i < strlen(pattern)) {
		if (pattern[i] == pattern[j] || j == 0) {
			j ++ ;
			i ++ ;
			if (pattern[i] == pattern[j])
				next[i] = next[j];
			else
				next[i] = j ;
		} else {
			j = next[j];
		}
	}
}

static int kmp(char *string , char *pattern)
{
	int next[strlen(pattern)];
	get_next(pattern, next);

	int i, j;
	i = 1 ;
	j = 1 ;
	while (i <= strlen(string) && j <= strlen(pattern)) {
		if (string[i] == pattern[j] || j == 0) {
			i++;
			j++;
		} else {
			j = next[j];
		}
	}

	if ( j > strlen(pattern))
		return i - j + 1;
	else
		return -1;
}
