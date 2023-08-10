#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * array_range - creates an array of integers within a specified range
 * @min: minimum value of the range
 * @max: maximum value of the range
 *
 * Return: pointer to allocated memory containing the array of integers
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (!arr)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i - min] = i;

	return (arr);
}
