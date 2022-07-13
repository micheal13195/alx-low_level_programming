#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: input string
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 0, p, q;
	char *str, temp;

	while (count >= 0)
	{
	if (s[count] == '\0')
	break;
	count++;
	}
	str = s;
	for (p = 0; p < (count - 1); p++)
	{
	for (q = p + 1; q > 0; q--)
	{
	temp = *(str + q);
	*(str + q) = *(str + (q - 1));
	*(str + (q - 1)) = temp;
	}
	}
}
