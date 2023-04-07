#include"main.h"

int main_prime(int n, int i);

/**
 * is_prime_number - Function that to know if a
 * number is a prime number or not
 * @n: the number inputted to check
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime(n, n - 1));
}

/**
 * main_prime - Function, Calculates if a
 * number is prime recursively
 *
 * @i: The iterator
 * @n: number to evaluate
 *
 * Return: 1 if the number is prime, 0 if the number is not
 */

int main_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (main_prime(n, i - 1));
}
