#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @head: singly linked list
 * @idx: point of insertion
 * @n: data to be in new_node
 *
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	current = *head;
	i = 0;
	while (current != NULL)
	{
		if (i + 1 == idx)
		{
			current->next = new_node;
		}

		if (i == idx)
		{
			new_node->n = n;
			new_node->next = current;
		}
		return (new_node);
	}
	return (NULL);
}
