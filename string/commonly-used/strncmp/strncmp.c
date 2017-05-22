#include <string.h>
#include <stdio.h>

/* if function name is strncmp, gcc will report strncmp.c:28:24: error: macro
 * "strncmp" requires 3 arguments, but only 2 given. think think(chinglish) */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char uc1, uc2;

	if (n == 0)
		return 0;

	while (n-- > 0 && *s1 == *s2) {
		if (n == 0 || *s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	uc1 = (*(unsigned char *)s1);
	uc2 = (*(unsigned char *)s2);
	return ((uc1 < uc2) ? -1 : (uc1 > uc2));
}

int main()
{
	char *s1 = "iphone 4";
	char *s2 = "iphone 4s";

	int r = _strncmp(s1, s2, 8);
	printf("r = %d\n", r);

	r = _strncmp(s1, s2, 9);
	printf("r = %d\n", r);

	return 0;
}
