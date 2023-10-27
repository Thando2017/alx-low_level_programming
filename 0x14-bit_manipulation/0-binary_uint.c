#include "main.h"

/**
 * binary_to_uint - It's function converts  binary number to unsigned int.
 * @b: The pointers to a string containing a binary number
 *
 * Return: The unsigned int with the decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!d)
		return (0);
	for (b = 0; d[b] != '\0'; b++)
	{
		if (d[b] != '0' && d[b] != '1')
			return (0);
	}
	for (a = 0; d[b] != '\0'; b++)
	{
		num <<= 1;
		if (d[b] == '1')
			num += 1;
	}
	return (num);
}

