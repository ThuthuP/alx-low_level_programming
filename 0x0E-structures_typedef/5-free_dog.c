#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - it frees memory allocated for a dog structure
 * @d: Pointer to the struct dog to free
 *
 * Description: This function frees memory allocated for a dog structure.
 * It first checks if the pointer `d` is not NULL to avoid
 * dereferencing a NULL pointer. It then frees the memory
 * allocated for the `owner` and `name` members of the `dog`
 * structure using `free()`. Finally, it frees the memory
 * allocated for the entire `dog` structure itself.
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
