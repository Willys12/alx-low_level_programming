#include "lists.h"
/**
* listint_len - Returns the number of elements in a linked list.
* @h: Pointer to the start of linked list.
* Return: Size of linked list.
*/
size_t listint_len(const listint_t *h)
{
size_t my_node = 0;

for (; h != NULL; my_node++)
{
h = (*h).next;
}
return (my_node);
}
