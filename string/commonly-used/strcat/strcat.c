#include <string.h>
#include <stdio.h>

char *strcat(char *s1, const char *s2)
{
	char *s = s1;
	while (*s != '\0')
		s++;
	strcpy(s, s2);
	return s1;
}

int main()
{
	char *s1 = "hello ";
	char *s2 = "world";
	char *s = malloc(sizeof(strlen(s1) + strlen(s2) + 1));
	strcpy(s, s1);
	char *r = strcat(s, s2);
	printf("%s\n", r);

	return 0;
}
