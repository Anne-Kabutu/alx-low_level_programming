#include "lists.h"

/**
 * get_nodeint_at_index - retruns the nth node of a linked list
 * @index: nth node
 * @head: pointer to  list
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	if (head == NULL && i < index)
		return (NULL);
	else
		return (head);
}
