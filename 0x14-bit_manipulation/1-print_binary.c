#include "main.h"
/**
 * print_binary - Print the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}

		mask >>= 1;
	}
}
