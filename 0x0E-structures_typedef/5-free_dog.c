#include "dog.h"
/**
*free_dog - Frees dogs.
*@d: Pointer to struct dog_t.
*Return: Nothing.
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
