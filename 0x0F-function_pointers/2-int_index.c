#include "function_pointers.h"
/**
*int_index - searches for an integer.
*@array: Pointer to array.
*@size: Number of elements in array.
*@cmp: Function pointer.
*Return: Integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int j;

if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (j = 0; j < size; j++)
{
if ((*cmp)(array[j]) != 0)
return (j);
}
return (-1);
}
