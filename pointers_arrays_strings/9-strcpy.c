#include "main.h"
#include <string.h>

/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @src: source string
 * @dest: destination string
 * Return: dest
 */


char *_strcpy(char *dest, char *src)
{
	int i  = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
	_putchar ('\0');
}
