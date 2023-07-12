#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *array_range - function that creates an array of integers
 *@min: min value
 *@max: max value
 *Return: the pointer to the newly create array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int len = max - min + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(len * sizeof(int));
	if  (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
