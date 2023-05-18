#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: The index of the node to delete
 * Return: 1 if the deletion succeeded, or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	 unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return -1;

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return 1;
	}

	current = *head;
	while (count < index)
	{
		if (current == NULL)
			return -1;
		current = current->next;
		count++;
	}

	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return 1;
	}

	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return 1;
}

