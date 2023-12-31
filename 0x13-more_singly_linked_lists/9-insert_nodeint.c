#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at given index.
 * @head: The head of the node.
 * @idx: the index.
 * @n: data.
 *
 * Return: The address of the new node. or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	ui_t i;
	listint_t *h, *tmp;

	h = *head;
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (h != NULL)
	{
		if (idx == 0)
		{
			tmp->next = *head;
			*head = tmp;
		}
		else
		{
			for (i = 0; i < idx - 1; i++)
			{
				if (h == NULL)
				{
					free(tmp);
					return (NULL);
				}
				h = h->next;
			}
			tmp->next = h->next;
			h->next = tmp;
		}
	}
	else
		*head = tmp;
	return (tmp);
}
