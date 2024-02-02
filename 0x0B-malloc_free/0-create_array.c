#include "main.h"
/**
*create_array - Entry point
*@size: Size of arrays created
*@c: Initializes each element of array
*Return: A pointer to array or NULL on fail.
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;

	if (size == 0)
	{
		return (0);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		arr[j] = c;
	}
	return (arr);
}
