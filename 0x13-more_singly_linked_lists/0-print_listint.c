#include "lists.h"
/**
 * print_listint - print integer
 * @h: the element containing the list
 * Return: the node of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0, *ptr;

	h->next = ptr;
	while (ptr != NULL)
	{
		printf("%d\n", h->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
