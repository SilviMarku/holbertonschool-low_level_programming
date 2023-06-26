#include "main.h"
#include <string.h>

/**
 * print_rev  - Write a function that prints a string
 * @s: string
 */

void print_rev(char *s)
{
	int i;
	int l = 0;

	while (s[l] != '\')
	       l++;

	i = l - 1;

	while (i >= 0)
		{	
		_putchar(s[i]);
		i--;
		}
	_putchar('\n');
}
