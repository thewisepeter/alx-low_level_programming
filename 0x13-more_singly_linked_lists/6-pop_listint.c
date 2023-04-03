#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double pointer to the head note
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int p;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	p = temp->n;
	*head = temp->next;
	free(temp);

	return (p);
}
