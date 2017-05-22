#include <string.h>
#include <stdio.h>

void *memcpy(void *s1, const void *s2, size_t n)
{
	char *dst = s1;
	const char *src = s2;

	while (n-- != 0)
		*dst++ = *src++;
	return s1;
}

int main()
{
	char *s1 = "hello world!";
	char *s2 = malloc(strlen(s1) + 1);
	memcpy(s2, s1, strlen(s1) + 1);
	printf("s2: %s\n", s2);

	return 0;
}
