#include <stdio.h>
#include <stdbool.h>

bool wildcmp(const char *str, const char *pattern) 
	if (*pattern == '\0') {
		return (*str == '\0');
	}

	if (*pattern == '*' && *(pattern + 1) != '\0' && *str == '\0') {
		return false;
	}

	// If the current characters match or pattern has '?'
	if (*pattern == *str || *pattern == '?') {
		return wildcmp(str + 1, pattern + 1);
	}

	// If we encounter '*'
	if (*pattern == '*') {
		return wildcmp(str, pattern + 1) || wildcmp(str + 1, pattern);
	}

	return false;
}

int main(void) {
	int r;

	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);

	// Rest of the test cases...

	return 0;
}

