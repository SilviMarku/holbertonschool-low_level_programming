#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *free_list - function that frees all memory allocated to a linked list
 *@head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
