#include <stdlib>
#include "list.h"
#include <string.h>
#include <stdio.h>
/**
 * add_dnodeint_end - function that adds a new node at the end
 *@head: first node
 *@n: value to the new node
 *Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *new_end,*tmp;

        new_end = malloc(sizeof(dlistint_t));
        if (new_end == NULL)
                return (NULL);

        new_end->n = n;
        new_end->next = NULL;

        tmp = *head;

        if (tmp == NULL)
        {
                *head = new_end;
                return (new_end);
        }
        while (tmp->prev != NULL)
        {
                tmp = tmp->next;
        }
        new_end->prev = tmp;
        tmp->next = new_end;

        return (new_end);
                                                                                                              6,17          Top
}
