#include "lists.h"
/**
* add_nodeint - Adds a new node at the beginning of a list.
* @head: Double pointer to the head of linked list.
* @n: The parameter included at the beginning.
* Return: Address of the new element or NULL on fail.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}

(*new_node).n = n;
(*new_node).next = *head;
*head = new_node;

return (new_node);

}
