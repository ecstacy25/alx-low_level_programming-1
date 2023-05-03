#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: pointer to the head of the list
 *
 * Return: head node's data(n).
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	head_node = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (head_node);
}
