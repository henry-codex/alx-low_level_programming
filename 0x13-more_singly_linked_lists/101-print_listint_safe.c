#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list, safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *curr = head;
    const listint_t *prev = NULL;
    const listint_t *loop_start = NULL;

    while (curr)
    {
        printf("[%p] %d\n", (void *)curr, curr->n);
        count++;

        if (curr->next >= curr)
        {
            loop_start = curr->next;
            break;
        }

        curr = curr->next;
    }

    if (loop_start)
    {
        curr = head;
        prev = NULL;

        while (curr != loop_start)
        {
            printf("[%p] %d\n", (void *)curr, curr->n);
            count++;
            prev = curr;
            curr = curr->next;
        }

        printf("-> [%p] %d\n", (void *)curr, curr->n);
        count++;

        while (curr->next != loop_start)
        {
            curr = curr->next;
            printf("[%p] %d\n", (void *)curr, curr->n);
            count++;
        }
    }
    else
    {
        curr = head;

        while (curr)
        {
            printf("[%p] %d\n", (void *)curr, curr->n);
            count++;
            curr = curr->next;
        }
    }

    return (count);
}

