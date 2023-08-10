#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
