#include "lists.h"
/**
* free_listint_safe -  frees a listint_t list.
* @h: a pointer to a pointer to a listint_t.
* Return: the size of the list that was free’d.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *ex_node = *h;
listint_t *next;
size_t times = 0;

while (ex_node)
{
next = (*ex_node).next;
free(ex_node);
times++;

if (ex_node <= next)
{
*h = NULL;
break;
}
ex_node = next;
}

return (times);
}
