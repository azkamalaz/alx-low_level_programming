#include <stdio.h>
/**
 * get_endianness - Determine the endianness of the system.
 * Return: 1 if the system is little-endian,
 * 0 if the system is big-endian
*/
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	return ((*byte == 1) ? 1 : 0);
}
