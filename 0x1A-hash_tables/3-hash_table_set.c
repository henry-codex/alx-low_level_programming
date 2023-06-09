#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Check for invalid inputs */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Create a copy of the value */
	char *value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	/* Calculate the index to store the key-value pair */
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the index */
	hash_node_t *current = ht->array[index];
	while (current != NULL)
	{
		/* Update value if key already exists in the linked list */
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}

	/* Create a new node and insert it at the beginning of the linked list */
	hash_node_t *new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

