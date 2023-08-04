#include "main.h"

/**
 * _strspn - gets the length of a preix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return:  the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;


	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (accept[y] == *s)
			{
				x++;
				break;
			}

			else if ((accept[y + 1]) == '\0')
				return (x);
		}
		s++;
	}

	return (x);
}
