#include <stdio.h>
#include "main.h"

/**
 * swap_int - function to swap two integer
 *
 * @a: - first integer
 * @b: - swap of two integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;

}
