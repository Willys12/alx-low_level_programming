#include "lists.h"
/**
* pop_listint - deletes the head node of a list.
* @head: Double pointer to the head of the list.
* Return: Head nodes data.
*/
int pop_listint(listint_t **head)
{
int j;
listint_t *temp_ptr;

if (*head == NULL)
{
return (0);
}

j = (*head)->n;
temp_ptr = *head;
*head = (*head)->next;

free(temp_ptr);
return (j);
}
