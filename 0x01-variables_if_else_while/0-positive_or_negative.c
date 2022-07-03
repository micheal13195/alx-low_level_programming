#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *  *main - assign a random number to the variable n each time it is executed
 *and prints out based on condition
 * Description:print whether the number stored in the variable n is
 * positive or negative.
 *Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
	printf("%d is %s\n", n, "negative");
	}
	else
	{
	printf("%d is %s\n", n, "zero");
	}
	return (0);
}
