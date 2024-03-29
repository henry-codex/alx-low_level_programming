#include "lists.h"

/**
 * print_dlistint - Prints all the nodes of a doubly linked list
 * @h: Pointer to the head of the list
 * Return: The number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return node_count;
}

