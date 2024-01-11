#ifndef LISTS_H
#define LISTS_H

/* Headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int u_int;

/**
 * struct dlistint_s - doubly linked list.
 * @n: integer.
 * @prev: points to the previous node.
 * @next: points to the next node.
 *
 * Description:
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Functions */
size_t print_dlistint(const dlistint_t *);
size_t dlistint_len(const dlistint_t *);
dlistint_t *add_dnodeint(dlistint_t **, const int);
dlistint_t *add_dnodeint_end(dlistint_t **, const int);
void free_dlistint(dlistint_t *);
dlistint_t *get_dnodeint_at_index(dlistint_t *, u_int);
int sum_dlistint(dlistint_t *);

#endif
