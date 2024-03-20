#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table.
* @ht: the hash table you want to add or update the key/value to.
* @key: is the key.
* @value: The value associated with the key.
* Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node;
hash_node_t *current;

if (ht == NULL || key == NULL || value == NULL)
{
return (0);
}
index = hash_djb2((const unsigned char *)key) % (*ht).size;
current = (*ht).array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free((*current).value);
(*current).value = strdup(value);
if ((*current).value == NULL)
{
return (0);
}
return (1);
}
current = (*current).next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}
(*new_node).key = strdup(key);
(*new_node).value = strdup(value);
if ((*new_node).key == NULL || (*new_node).value == NULL)
{
free((*new_node).key);
free(new_node);
return (0);
}
(*new_node).next = (*ht).array[index];
(*ht).array[index] = new_node;
return (1);
}