#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index.
* @head: Head of list.
* @index: Position where deletion takes place.
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (temp == NULL)
	{
		return (-1);
	}
	i = 0;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	else
	{
		*head = temp->next;
	}

	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);

	return (1);
}
