#include "main.h"

/**
 * _strlen - function to return length of a str
 * @s: - string
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	count++;

	return (count);
}
