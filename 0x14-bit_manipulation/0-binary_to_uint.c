#include "main.h"
/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: The input binary string to be converted.
 * Return: The equivalent unsigned integer value of the binary string.
 *         If the input is NULL or contains non-binary characters, returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			decimal = decimal * 2;
		}

		else if (b[i] == '1')
		{
			decimal = decimal * 2 + 1;
		}
		else
		{
			return (0);
		}

		return (decimal);
}
