#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to pointer to list
 * @n: element to be added
 *
 * Return: added list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = node;
	}

	return (node);
}
