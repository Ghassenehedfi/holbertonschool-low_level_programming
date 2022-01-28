#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: is the key.
 * @size: the size of the array of the hash table.
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0 || key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
