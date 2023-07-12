#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory
 *@b: size of the array
 *Return: returns void pointer to the created array
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
