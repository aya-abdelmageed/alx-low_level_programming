#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to list
 * @index: index to be return the node at
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;

	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}

	return (node);
}
