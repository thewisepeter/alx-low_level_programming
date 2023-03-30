#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: double pointer to first node
 * @str: string to be copied
 *
 * Return: pointer to new element or NULL (fail)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new_node;

	len = 0;
	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	if ((*head) == NULL)
	{
		(*head) = new_node;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (NULL);

	return (*head);
}
