#include "main.h"
/**
 * clear_bit - Clears the bit at a specified index in an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to be cleared, starting from 0.
 * Return: 1 on success, or -1 if an error occurs (index out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
