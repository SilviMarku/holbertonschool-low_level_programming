#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a new node at the beginning
 *@head: pointer to dhe head node
 *@n: value to the new node
 *Return:the adres of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
		*head = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
