#include <string.h>
#include <stdio.h>

char *_strchr(const char *s, int c)
{
	char ch = c;
	while (*s != '\0' && *s != ch)
		s++;

	return (*s == ch) ? (char *)s : NULL;
}

int main()
{
	char *s = "apple";
	char c = 'l';
	char *p = _strchr(s, c);
	printf("%c\n", *p);

	return 0;
}
