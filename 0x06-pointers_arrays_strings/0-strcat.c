#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *dest2 = dest;

	while (*dest2)
		dest2++;
	while (*src)
	{
		*dest2 = *src;
		dest2++;
		src++;
	}

	*dest2 = '\0';
	return (dest);
}
