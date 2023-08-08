#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - array of chars initializes it with a specific char.
 *@c: input caracter.
 *@size: size of array.
 *Return: NULL if size = 0, NULL if fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
