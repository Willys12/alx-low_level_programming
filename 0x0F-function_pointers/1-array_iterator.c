#include "function_pointers.h"
/**
*array_iterator - executes a function given as a parameter.
*@size: Size of array.
*@array: Pointer to array.
*@action: Function pointer.
*Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j;

if (action == NULL || array == NULL)
return;

for (j = 0; j < size; j++)
(*action)(array[j]);
}
