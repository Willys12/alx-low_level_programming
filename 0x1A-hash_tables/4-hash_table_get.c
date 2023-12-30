#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key.
* @ht: Hash table being looked into.
* @key: The key
* Return: value associated with the element, or NULL.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *current;

if (ht == NULL || key == NULL)
{
return (NULL);
}
index = hash_djb2((const unsigned char *)key) % (*ht).size;

current = (*ht).array[index];
while (current != NULL)
{
if (strcmp((*current).key, key) == 0)
{
return ((*current).value);
}
current = (*current).next;
}
return (NULL);
}
