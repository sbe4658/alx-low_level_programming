#include "lists.h"
/**
 * reverse_listint - reaveses a listint_t lits.
 * @head: a pointer to the current head of the list.
 *
 * Return: a pointer to the first node of the list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = *head, *tmp;

	while (h->next)
	{
		tmp = h->next->next;
		h->next->next = h;
		h = tmp;
	}
	(*head)->next = NULL;
	return (h);
}
