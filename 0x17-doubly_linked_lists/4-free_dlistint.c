#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head node.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
