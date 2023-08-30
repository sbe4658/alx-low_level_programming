#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at given index.
 * @head: the head node of the list.
 * @index: the index of the node to be deleted.
 *
 * Return: 1 if the node was deleted, otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, ui_t index)
{
	listint_t *h = *head, *tmp;
	ui_t i;

	if (h == NULL)
		return (-1);
	if (index == 0)
	{
		*head = h->next;
		free(h);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
			h = h->next;
		tmp = h->next;
		h->next = h->next->next;
		free(tmp);
	}
	return (1);
}
