#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *h, *x;

	if (*head != NULL)
	{
		h = *head;

		while ((x = h) != NULL)
		{
			h = h->next;
			free(x);
		}
		*head = NULL;
	}
}
