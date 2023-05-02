#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head to linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int n_node;
	listint_t *h, *del;

	if (*head == NULL)
		return (0);

	del = *head;
	h = del->next;
	n_node = del->n;

	free(del);
	*head = h;

	return (n_node);
}
