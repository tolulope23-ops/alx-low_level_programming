#include"main.h"
/**
 * reverse_array - function that reverse the content of
 * an array of integers
 *
 * @a: pointer to array
 * @n: number of elementsof an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int count;

	n = n - 1;
	count = 0;

	while (count <= n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
