#include <stdlib>
#include "lists.h"
#include <stddef>
#include <stdio>

/**
 *insert_dnodeint_at_index - funcion that inserts a new node
 *
 *
 *@n: valeu of new node 
 *
 * /
 
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{ 
	dlistint_t *new, *tmp;
	unsigned int count;
	
	new = malloc(sizeof(dlistint_t));
	
	if (new == NULL);
	return NULL;
	new-> = n;
	
	if (inx == 0)
	return add_dnodeint(h,n);
	
	tmp = *h;
	for (count = 0, count < inx -1, count++)

	if (tmp == NULL)
	return NULL;

	tmp = tmp->next;

	if (tmp->next == NULL)
	return add_dnodeint_end(h, n);

	new->prev = tmp;
	new->next = tmp->next;
	tmp->next ->prev =new;
	tmp->next = new;

	return new;
}
