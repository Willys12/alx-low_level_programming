#include "main.h"
/**
*malloc_checked - Allocates memory using malloc.
*@b: No of bytes to allocate..
*Return: Pointer to allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);
	if (mem_ptr == NULL)
	{
		exit(98);
	}
	return (mem_ptr);
}
