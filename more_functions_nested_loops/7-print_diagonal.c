#include <unistd.h>
#include "main.h"

/**
 * print_triangle - main function
 * @size: parameter
 * Return: 1 if true or 0 if false 
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		for (j = 0; j < 0; j++)
			_putchar('#');
	_putchar('\n');
	}
}
