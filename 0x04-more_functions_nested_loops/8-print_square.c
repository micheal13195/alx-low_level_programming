#include "main.h"

/**
 * print_square - function to print a square
 * @size: the size of a square
 * Result: 0
 */

void print_square(int size)
{
	int p, q;

	for (p = 0; p < size; p++)
	{
		for (q = 0; q < size; q++)
		{
			_putchar(35);
		}
		if (p != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
