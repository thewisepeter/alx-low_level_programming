#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a DLL
 * @head: DLL
 *
 * Return: sum (success)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
