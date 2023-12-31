#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - function that prints all the elements
 *@h: header node
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
