#include "lists.h"
/**
 * insert_dnodeint_at_index - inserst a node at given index.
 * @h: the head node.
 * @idx: the index.
 * @n: data.
 *
 * Return: The address of the inserted node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *ltmp;

	ltmp = malloc(sizeof(dlistint_t));
	if (!ltmp)
		return (NULL);
	ltmp->n = n;
	if (tmp)
	{
		if (idx == 0)
		{
			ltmp->prev = NULL;
			ltmp->next = tmp;
			*h = ltmp;
		}
		else
		{
			for (; idx; idx--)
			{
				if (!tmp)
				{
					free(tmp);
					return (NULL);
				}
				tmp = tmp->next;
			}
			ltmp->prev = tmp->prev;
			tmp->prev = ltmp;
			ltmp->next = tmp;
			ltmp->prev->next = ltmp;
		}
	}
	else
	{
		ltmp->next = NULL;
		ltmp->prev = NULL;
		*h = ltmp;
	}
	return (ltmp);
}
