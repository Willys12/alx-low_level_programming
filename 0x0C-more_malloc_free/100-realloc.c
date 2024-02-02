#include "main.h"
/**
*_realloc - reallocates a memory block.
*@ptr: Pointer to be freed.
*@old_size: size of the old  memory block
*@new_size: size of the new memory block.
*Return: Nothing.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i, dup_size;
void *ptr_2;
char *new_block, *old_block;

if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
ptr_2 = (void *)malloc(new_size);
if (ptr_2 == NULL)
{
return (NULL);
}
new_block = ptr_2;
old_block = ptr;
dup_size = old_size < new_size ? old_size : new_size;
for (i = 0; i < dup_size; i++)
{
new_block[i] = old_block[i];
}
free(ptr);

return (ptr_2);
}
