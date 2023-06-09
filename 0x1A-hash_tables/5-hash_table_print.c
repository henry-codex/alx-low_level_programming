#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Initialize variables */
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	/* Print the opening brace of the hash table */
	printf("{");

	/* Iterate over each index of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Check if the current index is not empty */
		if (ht->array[i] != NULL)
		{
			/* Add a comma if necessary */
			if (comma_flag == 1)
				printf(", ");

			/* Traverse the linked list at the current index */
			node = ht->array[i];
			while (node != NULL)
			{
				/* Print the key-value pair */
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				/* Add a comma if there are more nodes */
				if (node != NULL)
					printf(", ");
			}

			/* Set the comma flag to 1 */
			comma_flag = 1;
		}
	}

	/* Print the closing brace of the hash table */
	printf("}\n");
}

