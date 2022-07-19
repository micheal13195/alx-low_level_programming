#include "main.h"

/**
 * _memset - function that fill memory
 * @s: memory area
 * @b: constant byte
 * @n: byte filled
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(s + i) =  b;

	return (s);
}
