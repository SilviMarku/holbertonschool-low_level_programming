#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: n bytes of second string
 *Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i;

	if (s2 == NULL)
	{
		s2 = "";
		n = 0;

	}

	if (s1 == NULL)
		s1 = "";
	if (n >= (unsigned int) strlen(s2))
		n = strlen(s2);
	pointer = malloc(strlen(s1) + n + 1);
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	strcpy(pointer, s1);
	for (i = 0; i < n; i++)
		pointer[strlen(s1) + i] = s2[i];
	pointer[strlen(s1) + n] = '\0';
	return (pointer);
}
