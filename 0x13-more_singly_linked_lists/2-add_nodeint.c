#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginnig of a listint_t list.
 * @head: the current head of the list.
 * @n: the struct element.
 *
 * Return: The address  of the newly created node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
