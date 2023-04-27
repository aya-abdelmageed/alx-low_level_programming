#include "lists.h"

/**
 * free_list - free list
 * @head: pointer to list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
}
