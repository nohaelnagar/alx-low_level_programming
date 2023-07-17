#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase,
 * followed by a newline, using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 48;
	char ch = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
