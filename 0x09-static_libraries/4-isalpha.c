#include "main.h"
/**
 * _isalpha - function that print is isalpha
 * @c: int function
 *Return: 0 always
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
