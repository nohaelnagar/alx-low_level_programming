#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 * Return: void (prints the hash or nothing if is NULL)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *ptr;

	if (ht == NULL || ht->array == NULL)
		return (NULL);
}
