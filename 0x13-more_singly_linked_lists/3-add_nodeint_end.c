#include "lists.h"
/**
* add_nodeint_end - Adds a new node at the end of a list.
* @head: Double pointer to the head of the list.
* @n: Parameter to be included in the new node.
* Return: The address of the new element.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *end_node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}

(*new_node).n = n;
(*new_node).next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
end_node = head[0];
while ((*end_node).next != NULL)
{
end_node = (*end_node).next;
}
(*end_node).next = new_node;
}

return (new_node);
}
