#include "dog.h"
#include <stddef.h>

/**
* init_dog - Initializes a struct dog.
* @d: Pointer to the struct dog to initialize.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The name of the dog's owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}

d->name = name;
d->age = age;
d->owner = owner;
}
