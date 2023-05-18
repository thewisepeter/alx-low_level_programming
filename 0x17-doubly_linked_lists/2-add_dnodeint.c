#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a DLL
 * @head: double pointer to DLL
 * @n: integer to be inserted into new_node
 *
 * Return: pointer to new_node (success) or NULL (fail)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
