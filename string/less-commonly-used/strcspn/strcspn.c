#include <string.h>
#include <stdio.h>

/* find complementary */
size_t _strcspn(const char *s1, const char *s2)
{
	const char *sc1;
	for (sc1 = s1; *sc1 != '\0'; sc1++)
		if (strchr(s2, *sc1) != NULL)
			return (sc1 - s1);
	return sc1 - s1;
}

int main()
{
	char *s1 = "iphone 3gs";
	char *s2 = "fuck8g";
	int n = _strcspn(s1, s2);
	printf("%d\n", n);

	return 0;
}
