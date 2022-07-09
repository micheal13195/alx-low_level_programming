#include "main.h"

/**
 * print_diagonal - print diagonal lines n times
 *
 * @n: times diagonal lines are printed
 *
 * Return: no return
 */

void print_diagonal(int n)
{
		int p, q;

		for (p = 0; p < n; p++)
		{
			for (q = 0; q < p; q++)
			{
				_putchar(' ');
			}
			_putchar(92);
			if (p < (n - 1))
				_putchar('\n');
		}
		_putchar('\n');
}
