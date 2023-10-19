#include "lists.h"
/**
* list_len - returns the number of elements in a linked list.
* @h: Pointer to head of linked list.
* Return: Number of elemts in list.
*/
size_t list_len(const list_t *h)
{
size_t times = 0;

for (; h != NULL; h = (*h).next, times++)
{
/*Nothing here*/
}
return (times);
}
