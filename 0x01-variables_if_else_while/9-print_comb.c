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

	putchar('0');

	for (i = 1; i < 10; i++)
		putchar(',');
		putchar(' ');
		putchar('0' + i);
	putchar('\n');

	return (0);
}
