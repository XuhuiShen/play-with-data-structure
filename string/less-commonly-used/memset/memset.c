#include <string.h>
#include <stdio.h>

void *memset(void *s, int c, size_t n)
{
	unsigned char *us = s;
	unsigned char uc = c;
	while (n-- != 0)
		*us++ = uc;
	return s;
}

int main()
{
	int n = 10;
	char *s1 = malloc(10);
	char s2 = 'a';
	memset(s1, s2, n - 1);
	*(s1 + n - 1) = '\0';
	printf("%s\n", s1);

	return 0;
}
