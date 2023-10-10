#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
*struct dog - It describes the dog.
*@name: Rep dog's name.
*@age: Describes dog's age.
*@owner: Rep dog owner's name.
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
