#include <stdio.h>

/**
 * main - print alphabet in lowercase in
 * reverse order
 *
 * return (0)
 *
 */
int main(void)
{
		char ch;

		for (ch = 'z'; ch >= 'a'; ch--)
		{
		putchar(ch);
		}
		putchar(10);

		return (0);
}
