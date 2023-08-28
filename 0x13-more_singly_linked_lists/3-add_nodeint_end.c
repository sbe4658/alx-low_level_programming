#include "lists.h"
/**
 * add_nodeint_end - adds a new node at  the end of the listint_t list.
 * @head: the current head node of the list.
 * @n: struct member or element.
 *
 * Return: The Address of the new element, otherwise NULL;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h = *head, *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (h == NULL)
	{
		*head = tmp;
		return (*head);
	}
	while (h->next)
		h = h->next;
	h->next = tmp;
	return (tmp);
}
