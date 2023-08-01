#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - function that returns the number of elements
 *@h: header node
 *Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
