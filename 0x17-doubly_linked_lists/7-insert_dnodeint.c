#include "lists.h"
/**
* insert_dnodeint_at_index - Creates a node at given po.
* @n: The data.
* @idx: The position where node is created.
* @h: Head of list.
* Return: New node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *newNode;
dlistint_t *current;

   /*Allocate memory for the new node*/
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return NULL;

/* Assign the data to the new node*/
newNode->n = n;
newNode->prev = NULL;
newNode->next = NULL;

   /* If the list is empty or the index is 0, insert at the beginning*/
if (*h == NULL || idx == 0)
{
newNode->next = *h;
if (*h != NULL)
(*h)->prev = newNode;
*h = newNode;
return newNode;
}

   /*Traverse the list until the desired position*/
current = *h;
for (i = 0; i < idx; i++)
{
if (current == NULL)
{
free(newNode);
return NULL;
}
current = current->next;
}

   /*Insert the new node at the desired position*/
newNode->next = current;
newNode->prev = current->prev;
current->prev->next = newNode;
current->prev = newNode;

return newNode;
}
