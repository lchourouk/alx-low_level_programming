#include "lists.h"

/**
 * reverse_listint - reverses list
 *
 * @head: head of list
 *
 * Return: list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);
	a = *head;
	*head = NULL;
	while (a)
	{
		next = a->next;
		a->next = *head;
		*head = a;
		a = next;
	}
	return (*head);
}
