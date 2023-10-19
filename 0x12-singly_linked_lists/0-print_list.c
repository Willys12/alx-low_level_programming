#include "lists.h"
/**
* print_list - prints all the elements of a list.
* @h: Pointer to the node.
* Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
size_t nodes;

	for (nodes = 0; h; h = (*h).next, nodes++)
	{
		if ((*h).str)
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}
return (nodes);
}
