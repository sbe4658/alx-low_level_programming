#include "lists.h"
/**
 * print_list - prints all elem of list_t list.
 * @h: the head of the list_t list.
 *
 * Return: the number nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *tmp;

	while (h != NULL)
	{
		tmp = h;
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = tmp->next;
		n++;
	}
	return (n);
}
