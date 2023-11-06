#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees memory allocated for a dog
* @d: pointer to the dog to be freed
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
