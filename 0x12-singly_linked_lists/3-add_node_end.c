#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int count = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	temp->len = count;
	temp->str = strdup(str);
	temp->next = NULL;

	if (*head != NULL)
	{
		ptr = *head;
		while (ptr->next != NULL)
			prt = ptr->next;
		ptr->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
