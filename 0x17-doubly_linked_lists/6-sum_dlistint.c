#include "lists.h"
/**
* sum_dlistint - Sums data in a linked list.
* @head: Head of linked list.
* Return: Sum.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
