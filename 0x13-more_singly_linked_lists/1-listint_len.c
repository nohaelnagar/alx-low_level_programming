#include "lists.h"
/**
 * listint_len - the length of linked list
 * @h: the list
 * Return: the number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	*ptr;

	if (h == NULL)
		return (NULL);

	ptr =  h->next;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len + 1);
}
