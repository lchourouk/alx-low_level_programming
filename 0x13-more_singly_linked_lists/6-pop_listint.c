#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of list
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int n;

	if (!head || !*head)
		return (0);

	a = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = a;
	return (n);
}
