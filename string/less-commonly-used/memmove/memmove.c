#include <string.h>
#include <stdio.h>

void *memmove(void *s1, const void *s2, size_t n)
{
	char *p1 = s1;
	const char *p2 = s2;
	/* test for overlap that prevents an ascending copy */
	if (p2 < p1 && p1 < p2 + n) {
		p2 += n;
		p1 += n;
		while (n-- != 0)
			*--p1 = *--p2;
	} else
		while (n-- != 0)
			*p1++ = *p2++;
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
