#include "lists.h"

/**
 * print_listint - prints all the elements of
 * a listint_t list.
 *
 * @h: ptr to the head
 *
 * Return: list size
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
