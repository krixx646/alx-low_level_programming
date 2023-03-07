#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: Variable
 * Return: Always 0 always successful
 */
void print_chessboard(char (*a)[8])
{
	int d;

	int j;

	for (d = 0; d < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
