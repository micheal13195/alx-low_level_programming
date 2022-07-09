#include "main.h"

/**
 * print_square - function to print a square
 * @size: the size of a square
 * Result: 0
 */

void print_square(int size)
{
	int i, p;

	for (i = 0; i < size; i++)
	{
		for (p = 0; p < size; p++)
		{
			_putchar(35);
		}
		if (i != -1)
			_putchar('\n');
	}
	_putchar('\n');
}
