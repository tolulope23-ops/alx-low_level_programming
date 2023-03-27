#include"main.h"
/**
 * print_array - function to print n element of a array integers
 *
 * @a: the name of the array
 * @n: the number of elements
 *
 * Return: 0
 *
 */
void print_array(int *a, int n)
{
	int index_arr;

	for (index_arr = 0; index_arr < n; index_arr++)
	{
		printf("%d", a[index_arr]);
		if (index_arr != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
