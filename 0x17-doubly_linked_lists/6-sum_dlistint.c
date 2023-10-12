#include "lists.h"
/**
 * sum_dlistint - sums the n data in a list.
 * @head: the head node.
 *
 * Return: the result.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
