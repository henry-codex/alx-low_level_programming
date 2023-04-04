#include "lists.h"

/**
 * pop_listint - deletes the head node of a list and returns its data
 * @head: pointer to a pointer to the head node of a linked list
 *
 * Return: data of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *fr;  /* create a temporary node to hold the current head */
	int nodedata;   /* integer variable to hold the data of the deleted node */

	if (*head == NULL)  /* if the list is empty */
	{
		return (0);
	}

	nodedata = (*head)->n;  /* get the data of the head node */
	fr = (*head)->next;     /* move to the next node */
	free(*head);            /* delete the head node */
	*head = fr;             /* update the head node */
	return (nodedata);      /* return the data of the deleted node */
}

