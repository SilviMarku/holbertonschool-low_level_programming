#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - copys a given string and duplicates it
 *@str: string to be duoplicated
 *Return: pointer to the string duplicated
 */
char *_strdup(char *str)
{
	char *new;
	unsigned int i;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != 0)
		i++;
	new = malloc(i + 1);
	if (new == NULL)
		return (NULL);
	strcpy(new, str);
	return (new);
}
