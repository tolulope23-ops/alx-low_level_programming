#include"main.h"
/**
 * _pow_recursion - Function that returns the value of x
 * raised to the power of y
 *
 * @x: The value inputted
 *
 * Return: 0 (Success)
 * @y: The raised value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
