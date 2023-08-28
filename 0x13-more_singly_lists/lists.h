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

/* Function's section*/

#endif
