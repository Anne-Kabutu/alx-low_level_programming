#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: ptr to ptr to lists
 * @index: index to delete
 *
 * Return: 1 if sucessful -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete = *head, *tmp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (0);
	}

	for (i = 0; i < index && delete != NULL; i++)
		delete = delete->next;

	if (i < index && delete == NULL)
		return (-1);

	for (i = 0; i < (index - 1) && tmp != NULL; i++)
		tmp = tmp->next;

	tmp->next = delete->next;

	free(delete);

	return (0);
}
