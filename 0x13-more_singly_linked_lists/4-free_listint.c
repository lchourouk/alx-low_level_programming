#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 *
 * @head: ptr to head
 *
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
