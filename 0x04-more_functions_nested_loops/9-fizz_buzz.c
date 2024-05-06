#include <stdio.h>

/**
 * main - check the code
 *
 * Return: void.
 */
int main(void)
{

	int p = 1;

	while (p <= 100)
	{
		if (p % 3 == 0 && p % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (p % 3 == 0)
		{
			printf("Fizz");
		}
		else if (p % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", p);
		}

		if (p != 100)
		{
			putchar(' ');
		}
		p++;
	}
	putchar('\n');
	return (0);
}
