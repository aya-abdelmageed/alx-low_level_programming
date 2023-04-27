#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer to the list
 * @str: pointer to data to be add
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int l = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (s == NULL)
	{
		free(node);
		return (NULL);
	}
	while (str[l])
		l++;

	node->str = s;
	node->len = l;
	node->next = *head;

	*head = node;
	return (node);
}
