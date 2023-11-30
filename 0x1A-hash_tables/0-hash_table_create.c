#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_array;
	unsigned long int i;

	hash_array = malloc(sizeof(hash_table_t));
	if (!hash_array)
		return(NULL);
	hash_array->size = size;
	hash_array->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_array->array)
	{
		free(hash_array);
		return(NULL);
	}

	for (i = 0; i < size; i++)
		hash_array->array[i] = NULL;

	return(hash_array);
}

