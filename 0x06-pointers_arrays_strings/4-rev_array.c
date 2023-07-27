#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverses the order of elements in an integer array.
 * @a: Pointer to the integer array to be reversed.
 * @n: Number of elements in the array.
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
