#include "main.h"
#include <stddef.h>

/**
 * *_strchr -function that locates a character in a string
 * @s: pointer to the string
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
		return ("");

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
