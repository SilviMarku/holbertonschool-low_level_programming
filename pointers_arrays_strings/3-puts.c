#include "main.h"
#include <string.h>

/**
 * _puts  - Write a function that prints a string
 * @str: string
 */

void _puts(char *str)
{
	int i = 0;
	int l = (int) strlen(str);

	while (i < l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
