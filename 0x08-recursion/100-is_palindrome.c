#include "main.h"
#include <string.h>

/**
 * seedCompare - this function actually does the major
 * work here by comparing the corresponding lefthand
 * entry and righthand entry of the string
 * @LHstart: this is the value that tells this function
 * where to start from the left hand side
 * @RHstart: this also tells the function where to start
 * from the righthand side
 * @s: this is the string where our checks are carried out on
 * Return: this function return a boolean value depending
 * on the string passed
 */
int seedCompare(char *s, int LHstart, int RHstart)
{
	if (RHstart < LHstart)
		return (1);
	if (s[RHstart] != s[LHstart])
		return (0);
	return (seedCompare(s, ++LHstart, --RHstart));
}

/**
 * is_palindrome - this function checks if a passed string
 * is a palindrome
 * @s: this function takes a string s as input
 * Return: this function return and integer value 0 if
 * the string is not a palindrom, otherwise it returns 1
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (seedCompare(s, 0, length - 1));
}
