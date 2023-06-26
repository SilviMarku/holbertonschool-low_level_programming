#include "main.h"
#include <string.h>

/**
 * puts_half  - Write a function that prints a string
 * @str: point to character
 */

void puts_half(char *str)
{
	int i = 0;
	int n = (sizeof(str) - 1) / 2;

	if (sizeof(str) % 2 == 1)
	{
		for (i = n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (sizeof(str) / 2) + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
