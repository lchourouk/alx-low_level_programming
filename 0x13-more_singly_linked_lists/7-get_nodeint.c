#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *  of a listint_t linked list.
 *
 *  @head: ptr to list head
 *  @index: nth node
 *
 *  Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a;
	unsigned int i;

	for (a = head, i = 0; a && i < index; a = a->next, i++)
		;
	return (a);
}
