#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: Prints all possible combinations of single-digit numbers.
  *
  * Return: 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int i;

	for (i = 1; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
