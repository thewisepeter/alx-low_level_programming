#include "lists.h"

/**
 *  dlistint_len - prints all the elements of a DLL
 * @h: pointer to DLL
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elements = 0;

	while (h)
	{
		h = h->next;
		number_of_elements++;
	}

	return (number_of_elements);
}
