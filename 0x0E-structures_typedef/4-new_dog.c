#include "dog.h"
/**
*new_dog - creates a new dog.
*@name: Rep dog's name.
*@age: Describes age.
*@owner: Rep owner's name.
*Return: A pointer.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
(void)age;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
(*new_dog).name = malloc(strlen(name) + 1);
(*new_dog).owner = malloc(strlen(owner) + 1);
if ((*new_dog).name == NULL || (*new_dog).owner == NULL)
{
free((*new_dog).name);
free((*new_dog).owner);
free(new_dog);
return (NULL);
}
strcpy((*new_dog).name, name);
strcpy((*new_dog).owner, owner);

return (new_dog);
}
