#include "main.h"
#include <string.h>

/**
 * rev_string - Write a function that reverses a string
 * @s: pointer to character
 * Return: fgfh
 */

void rev_string(char *s)
{
	int tmp, start, len, end;

	len = 0;

	while (s[len] != '\0')
		len++;

	start = 0;
	end = len - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
