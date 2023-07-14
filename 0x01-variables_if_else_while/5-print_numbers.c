#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: Prints all single digit numbers of base 10 starting from 0
  *
  * Return: 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar('0' + number);
	putchar('\n');

	return (0);
}
