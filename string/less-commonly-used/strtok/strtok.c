#include <string.h>
#include <stdio.h>
#include <stdio.h>

char *_strtok_r(char *s, const char *delimiters, char **lasts)
{
	char *sbegin, *send;
	sbegin = s ? s : *lasts;
	sbegin += strspn(sbegin, delimiters);
	if (*sbegin == '\0') {
		*lasts = "";
		return NULL;
	}
	send = sbegin + strcspn(sbegin, delimiters);
	if (*send != '\0')
		*send++ = '\0';
	*lasts = send;
	return sbegin;
}

char *_strtok(char *s1, const char *delimiters)
{
	static char *ssave = "";
	return _strtok_r(s1, delimiters, &ssave);
}

int main(void)
{
	char *input = "A bird came down the walk";
	printf("Parsing the input string '%s'\n", input);
	char *token = _strtok(input, " ");
	while(token) {
		puts(token);
		token = _strtok(NULL, " ");
	}

	printf("Contents of the input string now: '");
	for(size_t n = 0; n < sizeof input; ++n)
		input[n] ? printf("%c", input[n]) : printf("\\0");
	puts("'");
}
