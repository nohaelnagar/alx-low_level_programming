#include <stdio.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1, otherwise 0 if number contains non digit symbols
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	
	while (i < argc && argv[i][0] != '0')
	{
		int num = atoi(argv[i]);

		if (num == 0 || argv[i][0] == '-')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
		i++;
	}
}
