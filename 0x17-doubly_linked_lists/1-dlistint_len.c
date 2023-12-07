#include "lists.h"
/**
* dlistint_len - Returns number of elements in the list.
* @h: Head of the list.
* Return: Number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		n_count++;
		h = h->next;
	}
	return (n_count);
}
