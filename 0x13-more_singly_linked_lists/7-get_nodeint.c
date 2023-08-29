#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of listint_t list.
 * @head: The head of the node.
 * @index: the index of the node to be returned.
 *
 * Return: the nth (aka: index) node, otherwise NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	ui_t n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
