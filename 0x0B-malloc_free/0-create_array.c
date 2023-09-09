#include "main.h"
/**
 *create_array - Function begins here
 *@size: Array size
 *@c: Character array
 *Return: if 0 return NULL, otherwise return pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j < size ; j++)
	{
		arr[j] = c;
	}
	return (arr);
}
