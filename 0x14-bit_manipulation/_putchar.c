#include <unistd.h>

/**
 * _putchar - Writes the character c to stand out
 * @c: Character to print
 *
 * Return: success 1.
 * On error, -1  returnes, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

