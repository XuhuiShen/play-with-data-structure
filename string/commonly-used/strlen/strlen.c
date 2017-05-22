#include <string.h>
#include <stdio.h>

size_t strlen(const char *s)
{
	const char *p = s;

	while (*p != '\0')
		p++;
	return (size_t)(p - s);
}

int main()
{
	char *s = "hello world";
	printf("length of %s is %zu\n", s, strlen(s));
}
