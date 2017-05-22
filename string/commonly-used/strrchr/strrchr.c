#include <string.h>
#include <stdio.h>

char *_strrchr(const char *s, int c)
{
	const char *last = NULL;
	/* If the character we're looking for is the terminating null,
	   we just need to look for that character as there's only one
	   of them in the string.  */
	if (c == '\0')
		return strchr(s, c);

	while ((s = strchr(s, c)) != NULL) {
		last = s;
		s++;
	}

	return (char *)last;
}

int main()
{
	char *s = "apple";
	char c = 'l';
	char *p = _strrchr(s, c);
	printf("%c\n", *p);

	return 0;
}
