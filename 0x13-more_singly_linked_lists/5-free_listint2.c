#include "lists.h"

/**
 * free_listint2 - function that frees a ristint_t list
 * @head: list to be freed
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	current = *head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
