#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a newline, using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
