#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - function to update a point
 * @n: - reset the point of n to 98
 * Return: 0
 */

void reset_to_98(int *n)
{
	int x = 98;
	int *ptr = &x;

	ptr = &x;

	printf("%d", *ptr);

}
