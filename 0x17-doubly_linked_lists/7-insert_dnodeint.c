#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position
 * @h: DLL
 * @idx: index at which new_node is to be inserted
 * @n: integer to be inserted into new_node
 *
 * Return: new-node (success) or NULL (fail)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current;
	unsigned int i = 0;

	if (idx == 0)
		new_node = add_dnodeint(h, n);

	current = *h;
	i = 1;

	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;

	while (current)
	{
		if (i == idx)
		{
			if (current->next == NULL)
			{
				new_node = add_dnodeint_end(h, n);
			}
			else
			{
				new_node = malloc(sizeof(dlistint_t));
				if (!new_node)
					return (NULL);

				new_node->n = n;
				new_node->next = current->next;
				new_node->prev = current;
				current->next->prev = new_node;
				current->next = new_node;
			}
			break;
		}
		current = current->next;
		i++;
	}
	return (new_node);
}
