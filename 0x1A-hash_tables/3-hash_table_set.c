#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table to add or update the key/value to
 * @key: key is the key. key can not be an empty string
 * @value: value is the value corresponding to the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *hash_node = NULL;
	hash_node_t *temp;
	char *new_value;


	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->value, value))
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = make_hash_node(key, value);
	if (!hash_node)
		return (0);

	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}



/**
 * make_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */

hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

