#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string length to be returned
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		++c;
	}
	return (c);
}
