#include <unistd.h>
#include "main.h"

/**
 * print_number - main function
 * @c: parameter
 * Return: 1 if true and 0 if otherwise
 */

void print_numbers(void)
{
	int a;
	
	for (a = '0'; a <= '9'; a++)
	{
		_putchar (a);
	}
	_putchar ('\n');
}
