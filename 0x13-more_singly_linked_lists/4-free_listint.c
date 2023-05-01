#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *h;

	h = head;
	while (h != NULL)
	{
		head = head->next;
		free(h);
		h = head;
	}
}
