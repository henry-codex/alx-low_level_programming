#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* function prototypes */
size_t print_listint(const listint_t *h); /* prints all the elements of a linked list */
size_t listint_len(const listint_t *h); /* returns the number of elements in a linked list */
listint_t *add_nodeint(listint_t **head, const int n); /* adds a new node at the beginning of a linked list */
listint_t *add_nodeint_end(listint_t **head, const int n); /* adds a new node at the end of a linked list */
void free_listint(listint_t *head); /* frees a linked list */
void free_listint2(listint_t **head); /* frees a linked list and sets the head to NULL */
int pop_listint(listint_t **head); /* deletes the head node of a linked list and returns its data */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); /* returns the nth node of a linked list */
int sum_listint(listint_t *head); /* returns the sum of all the data of a linked list */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); /* inserts a new node at a given position */
int delete_nodeint_at_index(listint_t **head, unsigned int index); /* deletes the node at a given position */

#endif /* LISTS_H */

