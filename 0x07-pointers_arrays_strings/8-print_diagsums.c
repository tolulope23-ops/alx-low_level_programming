#include"main.h"
/**
 * print_diagsums - Function that prints the sum
 * of the two diagonals of a square matrix of integers
 *
 * @a: The matrix of integers
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int d, sum1 = 0, sum2;

	for (d = 0; d < size; d++)
	{
		sum1 += a[d];
		a += size;
	}
	a -= size;

	for (d = 0; d < size; d++)
	{
		sum2 += a[d];
		a -= size;
	}
	printf("%d, %d", sum1, sum2);
}
