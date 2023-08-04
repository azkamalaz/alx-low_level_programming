#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function of the program, which serves as the entry point.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 * Return: Always 0.
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
