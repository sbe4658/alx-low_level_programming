#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: the head node of the list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	if (*head != NULL)
		*head = NULL;
}
