#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: double pointer to the beginning of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	previous = *head;
	current = (*head)->next;

	for (i = 1; current && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (i == index && current)
	{
		previous->next = current->next;
		free(current);
		return (1);
	}

	return (-1);
}

