#include "main.h"
/**
 * *_mmcpy - copies n bytes from memory area src to memory area dest
 * @dest: is the memory area
 * @src: memory area
 * @n: number of bytes
 * Return: pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = *src;
	return (dest);
}
