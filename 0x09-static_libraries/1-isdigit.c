#include "main.h"

/**
 * _isdigit - check if parameter is a number between 0 - 9
 *
 * @c: input number
 *
 * Return: 1 if c is a number, 0 if c is otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
