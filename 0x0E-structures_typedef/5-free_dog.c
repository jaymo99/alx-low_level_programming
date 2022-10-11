#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - deallocates memory assigned for a dog
 * @d: pointer to the dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
