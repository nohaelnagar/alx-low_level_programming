#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x = 0, y = 0, s1_len = 0, s2_len = 0;

	while (s1 && s1[s1_len])
		s1_len++;
	while (s2 && s2[s2_len])
		s2_len++;

	if (n < s2_len)
		s = malloc(sizeof(char) * (s1_len + n + 1));
	else
		s = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (!str)
		return (NULL);

	while (x < s1_len)
	{
		s[x] = s1[x];
		x++;
	}

	while (n < s2_len && x < (s1_len + n))
		s[x++] = s2[y++];

	while (n >= s2_len && x < (s1_len + s2_len))
		s[x++] = s2[y++];

	s[x] = '\0';

	return (str);
}
