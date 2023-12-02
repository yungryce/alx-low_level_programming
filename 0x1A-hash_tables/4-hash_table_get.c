#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieve value from
 * @key: key to find value
 * Return: value associated with key, or NULL if key cannot be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !(ht->array) || !(ht->size) || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
