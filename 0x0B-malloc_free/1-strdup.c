#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - dynamically allocating memory to create a copy of the input string
 *
 *@str: The source string to be duplicated.
 *
 * Return: A pointer to the dup string, or NULL if mem alloc fails.
 */

char *_strdup(char *str)
{
	size_t length = strlen(str);

	char *duplicate = (char *)malloc(length + 1);

	if (duplicate != NULL)
	{
		strcpy(duplicate, str);
	}
	return (duplicate);
}
