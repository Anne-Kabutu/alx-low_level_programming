#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
/* prints all the elements of a list*/

size_t listint_len(const listint_t *h);
/* returns the number of elements in a linked list*/

listint_t *add_nodeint(listint_t **head, const int n);
/* adds a new node to the beggining of a list*/

listint_t *add_nodeint_end(listint_t **head, const int n);
/* adds a new node at the end of a list*/

void free_listint(listint_t *head);
/* frees a list*/

void free_listint2(listint_t **head);
/* frees a list and sets head to null*/

int pop_listint(listint_t **head);
/* deletes the head node*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* returns the nth node of a list */

int sum_listint(listint_t *head);
/* returns the sum of all the data (n) of a linked list*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* inserts a new node given a position*/

int delete_nodeint_at_index(listint_t **head, unsigned int index);
/* deletes a node at index */

#endif /*LISTS_H*/
