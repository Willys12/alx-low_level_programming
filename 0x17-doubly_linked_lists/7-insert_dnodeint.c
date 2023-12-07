#include "lists.h"
/**
*
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = *h;
dlistint_t *new_node;
unsigned int count = 0;

if (idx <= 0)
{
add_dnodeint(h, n);
}
else
{
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return NULL;
}
new_node->n = n;
while (count < idx - 1 && temp != NULL)
{
temp = temp->next;
count++;
}
if (temp == NULL || temp->next == NULL)
{
new_node->next = NULL;
new_node->prev = temp;
if (temp != NULL)
{
temp->next = new_node;
}
}
else
{
new_node->next = temp->next;
new_node->prev = temp;
temp->next->prev = new_node;
temp->next = new_node;
}
}
return (new_node);
}
