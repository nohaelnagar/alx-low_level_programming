#include "lists.h"
/**
 * add_nodeint- add new node to linked list
 * @head: the head
 * @n: the neww added element
 * Return: the new added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t);

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
