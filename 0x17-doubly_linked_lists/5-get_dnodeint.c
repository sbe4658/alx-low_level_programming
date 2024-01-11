#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistitnt_t list.
 * @head: The head node.
 * @index: index of the nth node.
 *
 * Return: node address, otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, u_int index)
{
	for (; index; index--)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
