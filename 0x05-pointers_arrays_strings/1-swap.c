#include"main.h"
/**
 * swap_int - swaps the values of a to b and b to a
 *
 * @a: swaps and stores the address of b
 * @b: swaps and stores the address of a
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int replace;

	replace = *b;
	*b = *a;
	*a = replace;
}
