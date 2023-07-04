#include <unistd.h>
#include "main.h"

/**
 * _isdigit - main function
 * @c: parameter
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
