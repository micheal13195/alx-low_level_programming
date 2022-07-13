#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function to copy str by src
 * @dest: - point to src
 * @src: - copy to src
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
	*(dest + count) = *(src + count);
	if (*(src + count) == '\0')
	break;
	count++;
	}
	return (dest);
}
