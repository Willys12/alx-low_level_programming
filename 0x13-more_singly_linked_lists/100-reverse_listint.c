#include "lists.h"
/**
* reverse_listint - reverses a listint_t linked list.
* @head: Double pointer to head of linked list.
* Return: A pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *ex_node = *head;
listint_t *prev = NULL;
listint_t *next = NULL;

while (ex_node)
{
next = (*ex_node).next;
(*ex_node).next = prev;
prev = ex_node;
ex_node = next;
}

*head = prev;

return (*head);
}
