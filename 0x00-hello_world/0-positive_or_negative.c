#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -assign a random number to the variable n each time it is executed
 * Description: 'the variable n will store a different value every
 * time you will run this program'
 *
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if n > 0
	{
	printf("%d is %s\n", n, "is postive");
	}
	else if (n < 0)
	{
	printf("%d is %\n", n, "is negative");
	}
	else if n = 0
	{
	printf("%d is %\n", n, "is zero");
	}
	return (0);
}
