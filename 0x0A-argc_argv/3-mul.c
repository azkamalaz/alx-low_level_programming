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
	int i, result;

	if (argc > 1)
	{
		for (i = 1; i < argc - 1; i++)
		{
			int num1 = atoi(argv[i]);
			int num2 = atoi(argv[i + 1]);

			result = num1 * num2;
			printf("%d\n", result);
		}
	}
	else
		printf("Error\n");

	return (0);
}
