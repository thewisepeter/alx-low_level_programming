#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: double pointer to first node
 * @str: string to be copied
 *
 * Return: pointer to new element or NULL (fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new_node;

	len = 0;
	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
