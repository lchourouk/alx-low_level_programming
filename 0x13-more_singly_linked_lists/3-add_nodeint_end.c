#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list.
 *
 * @head: ptr to head
 * @n: node value
 *
 * Return: added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!head || !node)
		return (NULL);
	node->next = NULL;
	node->n = n;
	if (!*head)
		*head = node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
