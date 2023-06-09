#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: struct node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		if (head->str != NULL)
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		head = head->next;
	}
	return (count);
}
