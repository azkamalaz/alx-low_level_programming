#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the times table for a given number from 0 to 10.
 * @n: The number for which the times table is to be printed.
 */
void print_times_table(int n)
{
	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; mult++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
