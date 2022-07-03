#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry
 * Description: The variable n will store a different value every time
 * you run this program
 */

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
	printf("greater than 5/n");
	}
	else if (n % 10 < 10)
	{
	printf("less than 5/n");
	}
	else if (0 / n)
	{
	printf("zero");
	}
	return (0);
}
