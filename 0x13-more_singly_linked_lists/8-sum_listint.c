#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of
 *  a listint_t linked list.
 *
 *  @head: head of list
 *
 *  Return: sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
