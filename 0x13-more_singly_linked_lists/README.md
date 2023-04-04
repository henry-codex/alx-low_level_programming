Linked List Operations
This repository contains C code files for performing various linked list operations, including adding, deleting, and accessing nodes.

Files
The following files are included in this repository:

0-print_listint.c: A function that prints all the elements of a listint_t linked list.
1-listint_len.c: A function that returns the number of elements in a listint_t linked list.
2-add_nodeint.c: A function that adds a new node at the beginning of a listint_t linked list.
3-add_nodeint_end.c: A function that adds a new node at the end of a listint_t linked list.
4-free_listint.c: A function that frees a listint_t linked list.
5-free_listint2.c: A function that frees a listint_t linked list and sets the head to NULL.
6-pop_listint.c: A function that deletes the head node of a listint_t linked list and returns its data.
7-get_nodeint.c: A function that returns the nth node of a listint_t linked list.
8-sum_listint.c: A function that returns the sum of all the data (n) of a listint_t linked list.
9-insert_nodeint.c: A function that inserts a new node at a given position in a listint_t linked list.
10-delete_nodeint.c: A function that deletes the node at a given position of a listint_t linked list.
Usage
To use any of the functions in your program, include the appropriate header file lists.h and call the function with the required arguments.

For example, to add a node at the beginning of a linked list:

c
Copy code
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;

    add_nodeint(&head, 42);

    return (0);
}
