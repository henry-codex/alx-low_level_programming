#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}

	return count;
}

