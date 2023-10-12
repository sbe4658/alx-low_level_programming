#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at a given index.
 * @head: the head node.
 * @index: the index.
 *
 * Return: 1 success, -1 fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, int index)
{
	dlistint_t *tmp, *h = *head;

	if (h)
	{
		if (index)
		{
			for (; index; index--)
			{
				if (!h)
					return (-1);
				h = h->next;
			}
			tmp = h->prev;
			h->next->prev = tmp;
			tmp->next = h->next;
		}
		else
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
		}
	}
	free(h);
	return (1);
}
