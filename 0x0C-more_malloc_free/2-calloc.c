#include "main.h"
/**
*_calloc -  allocates memory for an array, using malloc.
*@nmemb: No. of elements
*@size: Size of element.
*Return: Nothing.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem_ptr;
unsigned int i;
unsigned char *byte_ptr;

if (size == 0 || nmemb == 0)
{
return (NULL);
}
mem_ptr = malloc(size * nmemb);
if (mem_ptr == NULL)
{
return (NULL);
}
byte_ptr = (unsigned char *)mem_ptr;
for (i = 0; i < size * nmemb; i++)
{
byte_ptr[i] = 0;
}
return (mem_ptr);
}
