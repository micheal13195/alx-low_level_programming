#include "main.h"

/**
 * print_diagonal - function to print diagonal universe
 * @n: diagonally packed
 * Result: 0
 */

void print_diagonal(int n)
{
	int i, p;

	for (i = 0; i < n; i++)
	{
	for (p = 0; p < n; p++)
	{
	_putchar(' ');
	}
	_putchar(92);
	if (p < (n - 1))
	_putchar('\n');
	}
	_putchar('\n');
}
