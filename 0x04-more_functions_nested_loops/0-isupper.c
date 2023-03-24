#include"main.h"
/**
 * _isupper - Determine if a letter is in upper or lower case
 *
 * @c: char to check
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)

		return (1);
	else
		return (0);
}

