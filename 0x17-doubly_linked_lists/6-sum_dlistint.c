#include "lists.h"
/**
 * sum_dlistint - returns the sums of all data of dlistint_t list.
 * @head: The head node.
 *
 * Return: the addition result.
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
