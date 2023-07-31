#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: which is two dimension array 8*8
 */
void print_chessboard(char (*a)[8])
{
	int ver, hor;

	for (ver = 0; ver < 8; ver++)
	{
		for (hor = 0; hor < 8; hor++)
		{
			_putchar(a[ver][hor]);
		}
		_putchar('\n');
	}
}
