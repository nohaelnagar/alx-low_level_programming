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
	int num = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		ptr = ht->array[x];
		while (ptr != NULL)
		{
			if (num != 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
			num++;
		}
	}
	printf("}\n");
}
