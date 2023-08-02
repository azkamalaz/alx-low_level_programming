#include <stdio.h>

/**
 * _strlen_recursion - Recursive function to calculate the length of a string.
 *
 * @s: The input C-style string whose length is to be calculated.
 * Return: The length of the string (number of characters).
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
