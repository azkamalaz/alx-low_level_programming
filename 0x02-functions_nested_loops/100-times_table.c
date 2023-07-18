#include <main.h>
#include <stdio.h>
/**
 * print_times_table - Prints the times table for a given number from 0 to 10.
 * @n: The number for which the times table is to be printed.
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return (0);
	}
	for (int i = 0; i <= 10; i++)
	{
		printf("%d x %d = %d\n", i, n, i * n);
	}
}

