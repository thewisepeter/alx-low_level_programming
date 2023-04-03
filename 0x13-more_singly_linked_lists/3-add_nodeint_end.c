#include "lists.h"

/**
 * add_nodeint_end - function that adds a new
 * node at the end of a listint_t list
 * @head: double pointer to head node
 * @n: int in the nodes
 *
 * Return: pointer to last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	if ((*head) == NULL)
	{
		(*head) = new_node;
	}
	else
	{
		temp = (*head);
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	new_node->n = n;
	new_node->next = NULL;

	return (*head);
}
