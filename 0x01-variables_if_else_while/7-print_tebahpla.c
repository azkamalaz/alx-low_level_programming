#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: Prints the lowercase alphabet in reverse.
  *
  * Return: 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
