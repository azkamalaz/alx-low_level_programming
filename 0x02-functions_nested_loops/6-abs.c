#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @i: input number as an integer.
 * Return: absolute value of the integer or zero.
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
