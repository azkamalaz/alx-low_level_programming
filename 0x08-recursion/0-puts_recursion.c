#include "main.h"
#include <string.h>

/**
 * _puts_recursion - func to print a str followed by a newline character.
 * The function prints each character of the input string one by one
 * until the end of the string is reached, and then adds a newline character.
 *
 * @s: The input C-style string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
