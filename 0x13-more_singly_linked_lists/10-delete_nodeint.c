#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the list
 * @index: index to delete node at it
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *del;
	unsigned int i = 0;

	h = *head;

	if (index != 0)
	{
		for ( ; i < index - 1 && h != NULL; i++)
			h = h->next;
	}

	if (h == NULL || (h->next == NULL && index != 0))
		return (-1);

	del = h->next;

	if (index != 0)
	{
		h->next = del->next;
		free(del);
	}
	else
	{
		free(h);
		*head = del;
	}
	return (1);
}
