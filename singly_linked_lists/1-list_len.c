#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - function that returns the number of elements
 *@h: header node
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
