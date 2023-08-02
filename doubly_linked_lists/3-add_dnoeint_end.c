#include <stdlib>
#include "list.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 *@head: pointer to head node
 *@str: string value to the new node
 *Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t length = strlen(str);
        dlistint_t *new = NULL;
        dlistint_t *p = *head;

        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
        {
                return (NULL);
        }

        new->n = n;
	new->next = NULL;

        if (*head == NULL)
        {
		new->priv = NULL;
                free(new->str);
                free(new);
                return (NULL);
        }

        new->len = length;
        if (p == NULL)
        {
                                                                                                              1,1           Top

