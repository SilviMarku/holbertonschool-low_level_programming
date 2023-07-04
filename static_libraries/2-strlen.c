#include "main.h"

/**
 * _strlen  - Write a function that returns the length of a string
 * @s: pointer to a character
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
