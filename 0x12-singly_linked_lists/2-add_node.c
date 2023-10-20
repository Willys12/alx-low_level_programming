#include "lists.h"
/**
* add_node - Adds new node at the begining.
* @head: A pointer to linked list.
* @str: String stored in new node.
* Return: New element address.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *node1;

node1 = malloc(sizeof(list_t));
if (node1 == NULL)
{
return (NULL);
}

(*node1).str = strdup(str);
if ((*node1).str == NULL)
{
free(node1);
return (NULL);
}
(*node1).len = strlen(str);
(*node1).next = *head;
*head = node1;

return (node1);
}
