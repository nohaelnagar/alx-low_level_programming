#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table I want to look into
 * @key: is the key I'm looking for in the hash table
 * Return: the value associated with the key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || ht->array == NULL || ht->size == 0
	|| strlen(key) == 0)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[indx];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
