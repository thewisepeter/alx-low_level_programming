#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: list whose elements are to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
