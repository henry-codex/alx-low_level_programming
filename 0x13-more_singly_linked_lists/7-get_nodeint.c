#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 *
 * @head: A pointer to the head node of the linked list.
 * @index: The index of the node to be returned.
 *
 * Return: If successful, a pointer to the nth node of the linked list.
 *         Otherwise, NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
	head = head->next;

	return (head ? head : NULL);
}

