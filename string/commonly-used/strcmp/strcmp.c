#include <string.h>
#include <stdio.h>

int strcmp(const char *s1, const char *s2)
{
	unsigned char uc1, uc2;

	while (*s1 != '\0' && *s1 == *s2) {
		s1++;
		s2++;
	}
	uc1 = (*(unsigned char *)s1);
	uc2 = (*(unsigned char *)s2);

	return ((uc1 < uc2) ? -1 : (uc1 > uc2));
}

int main()
{
	char *s1 = "apple";
	char *s2 = "belly";
	int r = strcmp(s1, s2);
	printf("s1 compared with s2 r = %d\n", r);
	r = strcmp(s2, s1);
	printf("s2 compared with s1 r = %d\n", r);

	return 0;
}
