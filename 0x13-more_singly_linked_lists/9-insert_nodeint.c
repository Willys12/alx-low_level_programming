#include "lists.h"
/**
* insert_nodeint_at_index - Inserts node at a given position.
* @head: Double pointer to head of the list.
* @idx: Position for the new node.
* @n: Data for the new node.
* Return: Address of the new node, NULL on fail.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node;
listint_t *temp_ptr = *head;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

(*new_node).n = n;
(*new_node).next = NULL;
if (idx == 0)
{
(*new_node).next = *head;
*head = new_node;
return (new_node);
}

for (i = 0; i < (idx - 1) && temp_ptr != NULL; i++)
{
temp_ptr = (*temp_ptr).next;
}

if (temp_ptr == NULL)
{
free(new_node);
return (NULL);
}

(*new_node).next = (*temp_ptr).next;
(*temp_ptr).next = new_node;

return (new_node);
}
