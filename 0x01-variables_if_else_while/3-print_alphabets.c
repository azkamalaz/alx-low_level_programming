#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: Prints the alphabet in lowercase
  *
  * Return: 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
