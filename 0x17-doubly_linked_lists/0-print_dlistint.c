#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: points to the head node.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
        u_int n = 0;

        for (; h; n++)
        {
                printf("%i\n", h->n);
                h = h->next;
        }
        return (n);
}
