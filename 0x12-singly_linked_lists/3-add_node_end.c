#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: list node
 * @str: data
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int l = 0;
	list_t *node, *h;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
	{
		free(node);
		return (NULL);
	}

	while (str[l])
		l++;

	node->str = s;
	node->len = l;
	node->next = NULL;
	h = *head;
	if (h == NULL)
	{
		*head = node;
		return (*head);
	}

	while (h->next != NULL)
		h = h->next;

	h->next = node;
	return (*head);
}
