#ifndef LISTS_H
#define LISTS_H

/* Headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * struct dlistint_s - doubly linked list.
 * @n: integer.
 * @prev: points to the previous node.
 * @next: points to the next node.
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
/* Functions */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif
