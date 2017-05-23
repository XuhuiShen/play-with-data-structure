#include <string.h>
#include <stdio.h>

char *_strpbrk(const char *s1, const char *s2)
{
	const char *sc1;
	for (sc1 = s1; *sc1 != '\0'; sc1++)
		if (strchr(s2, *sc1) != NULL)
			return (char *)sc1;
	return NULL;
}

int main()
{
	char *s1 = "12g";
	char *s2 = "iphone 7g";
	char *c = _strpbrk(s1, s2);
	printf("%c\n", *c);

	return 0;
}
