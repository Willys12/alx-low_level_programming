#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a list.
* @head: Pointer to head of linked list.
* @index: Position to be retrieved in the list.
* Return: NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int times = 0;
listint_t *ex_node = head;

while (ex_node != NULL)
{
if (times == index)
{
return (ex_node);
}
times++;
ex_node = (*ex_node).next;
}
return (NULL);
}
