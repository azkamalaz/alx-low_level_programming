include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes to be copied
 *
 * Return: a pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
