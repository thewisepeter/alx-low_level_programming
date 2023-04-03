#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes
 * the node at index index of a linked list
 * @head: linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 (success) -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *current;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	i = 0;
	while (current != NULL)
	{
		if (i + 1 == index)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
