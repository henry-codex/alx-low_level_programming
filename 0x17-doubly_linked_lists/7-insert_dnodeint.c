#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a specific position in a doubly linked list
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index at which the new node should be inserted
 * @n: The data integer for the new node
 * Return: Pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;

	if (idx == 0)
		return add_dnodeint(h, n);

	for (; idx != 1; idx--)
	{
		if (current == NULL)
			return NULL;
		current = current->next;
	}

	if (current->next == NULL)
		return add_dnodeint_end(h, n);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return new_node;
}

