#include "hash_tables.h"

/**
 * hash_table_create - creates a hash tables
 * @size: the array (hash table) size
 * Return: a  pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *ptr;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);
	ptr->size = size;
	ptr->array = malloc(size * sizeof(hash_table_t));
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ptr->array[x] = NULL;
	}
	return (ptr);
}
