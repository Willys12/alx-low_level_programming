#include "lists.h"
/**
* sum_listint - returns the sum of all the data (n) of a list.
* @head: Pointer to the head of the list.
* Return: The sum.
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ex_node = head;

while (ex_node != NULL)
{
sum += (*ex_node).n;
ex_node = (*ex_node).next;
}
return (sum);
}
