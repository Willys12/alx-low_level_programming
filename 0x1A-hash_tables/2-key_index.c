#include "hash_tables.h"
/**
* key_index - gives you the index of a key.
* @key: The key.
* @size: Size of the array in the hash table.
* Return: index at which the key/value pair should be stored.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % size);
}
