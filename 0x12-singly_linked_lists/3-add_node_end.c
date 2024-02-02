#include "lists.h"
/**
* add_node_end - Adds a new node.
* @head: Double pointer to the head.
* @str: Pointer to a string.
* Return: New node.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *end_node = *head;

new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
(*new_node).str = strdup(str);
if ((*new_node).str == NULL)
{
free(new_node);
return (NULL);
}
(*new_node).len = strlen(str);
(*new_node).next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while ((*end_node).next != NULL)
{
end_node = (*end_node).next;
}
(*end_node).next = new_node;
return (new_node);
}
