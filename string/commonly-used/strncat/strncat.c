#include <string.h>
#include <stdio.h>

char *strncat(char *s1, const char *s2, size_t n)
{
	char *s = s1;

	while (*s != '\0')
		s++;

	while (n != 0 && (*s = *s2++) != '\0') {
		n--;
		s++;
	}
	if (*s != '\0')
		*s = '\0';
	return s1;
}

int main()
{
	char *s1 = "hello ";
	char *s2 = "world";
	char *s1_ = malloc(sizeof(strlen(s1) + strlen(s2) + 1));
	strcpy(s1_, s1);

	char *r = strncat(s1_, s2, 2);
	printf("r: %s\n", r);

	return 0;
}
