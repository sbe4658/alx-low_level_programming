#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at given index.
 * @head: the head node.
 * @index: index.
 *
 * Return: 1 on success, otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, u_int index)
{
	dlistint_t *curr = *head;

	if (index)
	{
		for (; curr; index--)
		{
			if (!curr)
				return (-1);
			curr = curr->next;
		}
		curr->next->prev = curr->prev;
		curr->prev->next = curr->next;
		free(curr);
	}
	else
	{
		if (!curr)
			return (-1);
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(curr);
	}
	return (1);
}
