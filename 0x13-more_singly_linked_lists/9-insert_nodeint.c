#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: ptr to head
 * @idx: index
 * @n: value
 *
 * Return: inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	a = *head;
	while (a)
	{
		if (i == idx - 1)
		{
			node->next = a->next;
			a->next = node;
			return (node);
		}
		i++;
		a = a->next;
	}
	free(node);
	return (NULL);
}
