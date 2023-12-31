#include "main.h"
#include <stdio.h>
/**
 * _strcat - main function that concatenates two strings
 * @dest: destination parameter
 * @src: sorse parammeter
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
