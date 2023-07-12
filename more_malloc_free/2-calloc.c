#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *_calloc - function that allocates memoro
 *@nmemb: amount of members
 *@size: byte size of the member
 *Return: null pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = calloc(nmemb, size);
	if (pointer == NULL)
		return (NULL);
	return (pointer);
}
