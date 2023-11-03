#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table I want to delete
 * Return: nothinng
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *ptr, *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			ptr = node;
			node = node->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	}
	free(ht->array);
	free(ht);
}
