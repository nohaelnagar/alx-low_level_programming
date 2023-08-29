#include "lists.h"
/**
 * listint_len - the length of linked list
 * @h: the list
 * Return: the number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
