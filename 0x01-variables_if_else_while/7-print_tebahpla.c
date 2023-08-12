#include <stdio.h>

/**
 * main - print the lowercases alphabet in reverse
 * follow by new line 
 * Return: Always 0(success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
		putchar('\n');
		return (0);
}
