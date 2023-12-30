#include "hash_tables.h"
/**
*
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return hash % size;
}
