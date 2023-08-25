#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node at the beginning of a linked list.
 * @head: the old head of list_t list.
 * @str: a struct member.
 *
 * Return: a pointer the Head of list_t list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp, *h = (*head);

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str =  strdup(str);
	tmp->len = _strlen(str);
	tmp->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = tmp;
		return (*head);
	}
	while (h->next != NULL)
		h = h->next;

	h->next = tmp;
	return (tmp);
}
/**
 * _strlen - computes the length of s.
 * @s: a string.
 *
 * Return: the length of s.
 */
int _strlen(const char *s)
{
	int len = 0;

	if (s != NULL)
	{
		while (*(s++))
			len++;
	}

	return (len);
}
