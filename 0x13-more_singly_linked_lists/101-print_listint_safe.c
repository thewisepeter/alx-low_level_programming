#include "lists.h"

/**
 * print_listint_safe - function that prints
 * all the elements of a listint_t list
 * @head: list whose elements are to be printed
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			return (i);
		}
	}
	return (i);
}
