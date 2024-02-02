#include "lists.h"
/**
* free_listint2 - Frees list.
* @head: Double pointer to head of the list.
* Return: Void.
*/
void free_listint2(listint_t **head)
{
listint_t *temp_ptr;

while (*head != NULL)
{
temp_ptr = *head;
*head = (*head)->next;

free(temp_ptr);

}
head[0] = NULL;
}
