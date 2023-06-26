#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_array - function that prints n elements of an array of integers
 *@a: pointer to the array
 *@n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		if (i == n - 1)
			printf("%i", *(a + i));
		else
			printf("%i, ", *(a + i));
	printf("\n");
}
