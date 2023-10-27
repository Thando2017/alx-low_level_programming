#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - program sets value of a bit to 0 at a given index
 * @n: the parameter
 * @index: index
 * Return: 1 if success, -1 if there is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

