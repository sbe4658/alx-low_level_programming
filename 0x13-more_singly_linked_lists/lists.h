#ifndef LISTS_H
#define LISTS_H

/* Heder's section */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list.
 * @n: integer.
 * @next: points to the next node.
 *
 * Description: singly linked list node structure.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * ui_t - new unsigned int type.
 */
typedef unsigned int ui_t;
/* Function's section*/
size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);

#endif
