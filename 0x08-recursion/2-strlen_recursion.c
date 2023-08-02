#include <stdio.h>

/**
 * _strlen_recursion - Recursive function to calculate the length of a string.
 *
 * @s: The input C-style string whose length is to be calculated.
 * return: The length of an empty string is zero.
 * _strlen_recursion return: Move to the next char in the str and add 1 to the len.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
