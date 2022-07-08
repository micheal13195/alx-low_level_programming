#include "main.h"

/**
 * more_numbers - print numbers 0 - 14, 10 times
 *
 * Return: no return
 */

void more_numbers(void)
{
	int p, q;

	for (p = 0; p < 10; p++)
	{
		for (q = 0; q < 15; q++)
		{
			if (q >= 10)
				_putchar((q / 10) + 48);
			_putchar((q % 10) + 48);
		}
		_putchar('\n');
	}
}
