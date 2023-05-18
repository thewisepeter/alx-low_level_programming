#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a DLL
 * @head: DLL
 * @index: index of node
 *
 *
 * Return: pointer to node (Success) or NULL (fail)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (!head)
		return (NULL);

	current = head;


	while (current)
	{
		if (index == i)
			return (current);
		i++;
		current = current->next;
	}

	return (NULL);
}
