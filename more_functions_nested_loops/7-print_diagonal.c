#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - main function
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				_putchar(' ');
			}
	_putchar('\n');
		}
return;
}
