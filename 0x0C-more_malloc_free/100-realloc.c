#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocate memory for a block of data
 * @ptr: Pointer to the previously allocated memory
 * @old_size: The size of the old memory block in bytes
 * @new_size: The new size of the memory block in bytes
 *
 * Return: A pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		copy_size = old_size;
	else
		copy_size = new_size;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (copy_size > 0)
		memcpy(new_ptr, ptr, copy_size);

	free(ptr);

	return (new_ptr);
}
