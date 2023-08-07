#include "main.h"

/**
 * _strncat - main function that concatenates two strings
 * @dest: param destination string
 * @src: param sorce string
 * @n: param
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
	{
		i++;
	}
	for (j = 0; src[j] != 0 && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
