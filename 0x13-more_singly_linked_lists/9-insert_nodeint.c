#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list
 * @idx: index
 * @n: data of the node
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *h;
	unsigned int i = 0;

	h = *head;
	if (idx != 0)
	{
		for ( ; i < idx && h != NULL; i++)
			h = h->next;
	}

	if (h == NULL && idx != 0)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}

	else
	{
		node->next = h->next;
		h->next = node;
	}

	return (node);
}
