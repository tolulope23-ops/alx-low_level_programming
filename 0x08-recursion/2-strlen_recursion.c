#include"main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 *
 * @s: The string inputted
 *
 * Return: s (Success)
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
