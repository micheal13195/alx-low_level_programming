#include <stdio.h>
#include "main.h"

/**
*main -function that print alphabet in lowercase
*
*Return: 0 always
*/

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	;
	{
	putchar(ch);
	}

	putchar(10);

	return (0);
}
