#include "lists.h"
/**
* print_listint - Prints all elements of the list.
* @h: Pointer to the next node.
* Return: Number of nodes.
*/
size_t print_listint(const listint_t *h)
{
size_t list_el = 0;
const listint_t *my_node = h;

while (my_node != NULL)
{
printf("%d\n", (*my_node).n);
my_node = (*my_node).next;
list_el++;
}
return (list_el);
}
