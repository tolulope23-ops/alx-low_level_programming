#include"main.h"

int main_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Function that return the natural square root of a number
 *
 * @n: The number inputted to calculate
 * its square root
 *
 * Return: main_sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - Function that recurses a nutural number
 * @n: the number inputted  to calculate
 *
 * @i: iterator
 * Return: the resulting square root
 */
int main_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (main_sqrt_recursion(n, i + 1));
}
