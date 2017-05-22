#include <string.h>
#include <stdio.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *us1 = (const unsigned char *)s1;
	const unsigned char *us2 = (const unsigned char *)s2;
	while (n-- != 0) {
		if (*us1 != *us2)
			return (*us1 < *us2) ? -1 : +1;
		us1++;
		us2++;
	}

	return 0;
}

int main()
{
	char *s1 = "iphone 4";
	char *s2 = "iphone 5";
	int r = memcmp(s1, s2, 8);
	printf("r = %d\n", r);
	r = memcmp(s1, s2, 7);
	printf("r = %d\n", r);

	return 0;
}
