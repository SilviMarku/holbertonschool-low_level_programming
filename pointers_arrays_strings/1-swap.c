#include "main.h"

/**
 * swap_int  - Write a function that swaps the values of two integers
 * @a: an int
 * @b: an int
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
