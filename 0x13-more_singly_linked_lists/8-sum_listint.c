#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum_data;

	sum_data = 0;
	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
