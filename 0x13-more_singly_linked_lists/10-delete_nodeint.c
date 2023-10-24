#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index index of a list.
* @head: Double pointer to head of list.
* @index: the position of the node that should be deleted.
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int times = 0;
listint_t *ex_node = *head;
listint_t *prev = NULL;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(ex_node);
return (1);
}

while (ex_node != NULL)
{
if (times == index)
{
(*prev).next = (*ex_node).next;
free(ex_node);
return (1);
}
times++;
prev = ex_node;
ex_node = (*ex_node).next;
}

return (-1);
}
