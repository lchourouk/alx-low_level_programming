#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 *  of a listint_t list.
 *
 *  @head: ptr to head
 *  @n: node value
 *
 *  Return: added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);
	node->next = NULL;
	node->n = n;
	if (*head)
		node->next = *head;
	*head = node;

	return (node);
}
