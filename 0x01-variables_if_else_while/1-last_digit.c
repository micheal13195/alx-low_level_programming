#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main - Task 1 print the last digit of the number stored in the variable n
 *
*Description:'The variable n will store a different value every time,
 *  you run this program'
 **/

/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
	printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
	printf("0\n");
	}
	else
	{
	printf("less than 6 and not 0\n");
	}
	return (0);
}
