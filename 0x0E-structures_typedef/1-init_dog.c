#include "dog.h"

/**
*init_dog - initialize a variable of type struct dog.
*struct dog - Dog's description.
*@d: This a pointer.
*@name: Rep the dog's name.
*@age: Describes dog's age.
*@owner: Rep owner's name.
*Return: Nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
