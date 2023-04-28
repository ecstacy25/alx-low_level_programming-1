#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: pointer to the first node
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
