#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hashs table I want to add or update the key/value to
 * @key: is the key.
 * @value: value associated with the key
 * Return: 1 if succeeded or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *n_node;
	hash_node_t *h_node;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* hashnodes points to the array of the ht with the respective idx */
	h_node = ht->array[index];
	/* in case of key/value update */
	while (h_node)
	{
		if (strcmp(h_node->key, key) == 0)
		{
			/* delete the actual value in the hash table */
			free(h_node->value);
			/* the passed value must be duplicated, task cond. */
			h_node->value = strdup(value);
			if (h_node->value == NULL)
				return (0);
			return (1);
		}
		h_node = h_node->next;
	}

	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
		return (0);
	n_node->key = strdup(key);
	/* the passed value must be duplicated, task cond. */
	n_node->value = strdup(value);
	if (n_node->value == NULL)
		return (0);
	n_node->next = ht->array[index];
	ht->array[index] = n_node;
	return (1);
}
