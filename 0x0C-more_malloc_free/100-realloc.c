#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 * @return: pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
		free(ptr);
	return (NULL);

	ptr2 = malloc(new_size);

	if (ptr2 == NULL)
		return (NULL);

	memcpy(ptr2, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);

	return (ptr2);
}
