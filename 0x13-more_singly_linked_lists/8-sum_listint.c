#include "lists.h"
/**
 * sum_listint - sums all the data n of listint_t list.
 * @head: the head node of the list.
 *
 * Return: the result, otherwise 0.
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
