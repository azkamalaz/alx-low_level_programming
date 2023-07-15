#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int i, j, h;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (h = j + 1; h < 10; h++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + h);
				if (i != 7 || j != 8 || h != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
