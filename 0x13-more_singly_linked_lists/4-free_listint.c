#include "lists.h"
/**
* free_listint -  Frees a list.
* @head: Pointer to the head of the list.
* Return: Void.
*/
void free_listint(listint_t *head)
{
listint_t *temp_ptr;

while (head)
{
temp_ptr = head;
head = (*head).next;

free(temp_ptr);
}
}
