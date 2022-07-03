#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
	printf("greater than 5/n");
	}
	else if (n % 10 < 10 and != 0)
	{
	printf("less than 5/n");
	}
	else if (n % 10 = 0)
	{
	printf("zero");
	}
	return (0);
}
