#include <string.h>
#include <stdio.h>

char *strcpy(char *s1, const char *s2)
{
	char *dst = s1;
	const char *src = s2;
	while ((*dst++ = *src++) != '\0')
	 	;
	return s1;
}

int main()
{
	char *s1 = "hello";
	char *s = malloc(sizeof(strlen(s1) + 1));
	strcpy(s ,s1);
	printf("%s\n", s);

	return 0;
}
