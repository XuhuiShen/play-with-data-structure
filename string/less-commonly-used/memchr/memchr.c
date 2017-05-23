#include <string.h>
#include <stdio.h>

void *memchr(const void *s, int c, size_t n)
{
	const unsigned char *src = s;
	unsigned char uc = c;
	while (n-- != 0) {
		if (*src == uc)
			return (void *)src;
		src++;
	}

	return NULL;
}

int main()
{
	char *s = "apple";
	char c = 'l';
	char *p = memchr(s, c, 4);
	printf("%c\n", *p);

	return 0;
}
