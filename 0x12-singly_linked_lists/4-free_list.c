#include "lists.h"
/**
* free_list - Frees linked list.
* @head: Pointer to head of the list.
* Return: Void
*/
void free_list(list_t *head)
{
list_t *my_node = head;
list_t *next;

while (my_node != NULL)
{
next = (*my_node).next;
free((*my_node).str);
free(my_node);
my_node = next;
}
}
