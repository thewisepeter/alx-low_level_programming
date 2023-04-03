#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * of all the data (n) of a linked list
 * @head: linked list to be used
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current, *temp;
	int sum;

	if (head == NULL)
		return (0);

	current = head;
	sum = 0;
	while (current != NULL)
	{
		temp = current;
		sum += temp->n;
		current = temp->next;
	}
	return (sum);
}
