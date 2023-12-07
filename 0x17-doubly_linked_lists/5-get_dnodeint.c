#include "lists.h"
/**
* get_dnodeint_at_index - Return nth node of a list.
* @index: Position of the node.
* @head: Head of the list.
* Return: nth Node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int  count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
