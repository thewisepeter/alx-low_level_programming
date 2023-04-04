#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: linked list
 *
 * Return: pointer to reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return (*head);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
