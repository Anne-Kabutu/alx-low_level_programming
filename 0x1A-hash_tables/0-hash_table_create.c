#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *table;
	hash_node_t **item;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		free(table);
		return (NULL);
	}
	item = malloc(sizeof(hash_node_t) * size);
	if (!item)
	{
		free(table);
		free(item);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		item[index] = NULL;

	table->array = item;
	table->size = size;

	return (table);
}
