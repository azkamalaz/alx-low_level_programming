#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compare two strings lexicographically.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return:
 *  - A negative value if s1 is less than s2.
 *  - 0 if s1 is equal to s2.
 *  - A positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
