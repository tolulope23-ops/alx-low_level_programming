#include"main.h"
/**
 * factorial -  Function that prints the factorial of a number
 *
 * @n: The number inputted
 *
 * Return: 0 (Success)
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (1);

	return (n * factorial(n - 1));
}
