#include "lists.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head, *g;

	head = NULL;
	add_nodeint_end(&head, 98);
	g = insert_nodeint_at_index(&head, 0, -98);
	if (!g)
		printf("(nil)\n");
	else
		printf("-> %d\n", g->n);
	return (0);
}
