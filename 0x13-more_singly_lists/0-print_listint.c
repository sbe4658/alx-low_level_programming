#include "lists.h"
/**
 * print_listint - print all elements of listint_t list.
 * @h: the head of the list.
 *
 * Return: the number of nodes (aka: number of elements).
 */
size_t print_listint(const listint_t *h)
{
	ui_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
