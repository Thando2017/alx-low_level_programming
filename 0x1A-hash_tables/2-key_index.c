#include "hash_tables.h"

/**
 * key_index - Get index for the given key.
 * @key: Key (string) to hash.
 * @size: Size of the hash table.
 *
 * Return: Index of 'key' using djb2.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
