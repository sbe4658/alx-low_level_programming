#include "lists.h"
/**
 * pop_listint - delete the head of a listint_t list.
 * @head: the current head of the list.
 *
 * Return: the data n.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return ((*head)->n);
}
