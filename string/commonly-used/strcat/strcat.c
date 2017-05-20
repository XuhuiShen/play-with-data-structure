#include <string.h>
#include <stdio.h>

char *_strcat(char *s1, const char *s2)
{
	char *s = malloc(strlen(s1) + strlen(s2));
	strcpy(s, s1);
	char *_s = s;
	while (*_s != '\0')
		_s++;
	strcpy(_s, s2);
	return s;
}

int main()
{
	char *s1 = "hello ";
	char *s2 = "world";
	char *r = _strcat(s1, s2);
	printf("%s\n", r);

	return 0;
}
