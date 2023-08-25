#include "lists.h"
/**
 * free_list - frees all elements of list_t lsit.
 * @head: the head the list_t list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
