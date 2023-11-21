#include "lists.h"

/**
 * insert_nodeint_at_index - inserts and index at a given poition
 * @head: ptr to prt to list
 * @idx: the index to add node
 * @n: the int of the node
 *
 * Return: ptr to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

        node->n = n;

	if (idx == 0 && head != NULL)
	{
		node->next = *head;
		*head = node;
	}

	for (i = 0; i < (idx - 1) && tmp != NULL; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(node);
			return (NULL);
		}
	}

	node->next = tmp->next;
	tmp->next = node;

	return (*head);
}
