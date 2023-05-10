#include "lists.h"

/**
 * find_listint_loop - find a loop in singly linked list
 * @head: first node in list to be checked
 *
 * Return: pointer (cycle) NULL (no cycle found)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (list == NULL)
		return (0);

	fast = list->next;
	slow = list;

	while (fast != NULL && fast->next != NULL)
	{
		if (fast == slow)
			return (slow);
		fast = fast->next->next;
		slow = slow->next;
	}
	return (NULL);
}
