#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - main function
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('\');
	_putchar('\n');
}
