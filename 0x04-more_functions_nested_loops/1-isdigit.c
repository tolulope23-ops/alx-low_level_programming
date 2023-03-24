#include"main.h"
/**
 * _isdigit - check if a number is a digit
 *
 * @c: char to check
 *
 * Return: 1 if is a digit 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
