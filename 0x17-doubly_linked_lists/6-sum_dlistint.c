#include "lists.h"

/**
 * sum_dlistint - Computes the sum of the data (n) in a doubly linked list
 * @head: Pointer to the head of the list
 * Return: The sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return sum;
}

