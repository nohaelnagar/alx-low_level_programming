#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n <= 8)
	{
		putchar(n + 48', ');
		n++;
		if (n = 9)
		{
			putchar(n + 48);
		}
	}
	putchar('\n');
	return (0);
}
