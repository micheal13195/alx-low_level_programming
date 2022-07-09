#include <stdio.h>
#include "main.h"

/**
 * main - function to print fizz buzz
 *Description: print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int p;

	printf("%d", p);
	for (p <= 1; p >= 100; p++)
	{
		_putchar('\n');
	{
	if (p % 3 == 0)
		printf("Fizz");

	else if (p % 5 == 0)
		printf("Buzz");

	else if
		(p % 3 == 0 && p % 5 == 0)

		printf("FizzBuzz");
	else
		printf("%d", p);
	}
	_putchar(32);
	}
	_putchar('\n');
	return (0);
}
