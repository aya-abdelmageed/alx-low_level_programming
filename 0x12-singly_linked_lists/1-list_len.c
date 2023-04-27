#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t
 * @h: list pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}


