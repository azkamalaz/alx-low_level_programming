#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings with a length limit.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to concatenate from src.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest2 = dest;

	while (*dest2)
	{
		dest2++;
	}

	while (*src && n > 0)
	{
		*dest2 = *src;
		dest2++;
		src++;
		n--;
	}

	*dest2 = '\0';
	return (dest);
}
