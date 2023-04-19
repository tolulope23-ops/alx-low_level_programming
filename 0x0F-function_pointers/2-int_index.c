#include"function_pointers.h"
/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 *
 * @size:The size of the array.
 *
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: if no element matches or the size <= 0 -1.
 * otherwise - The index of the first element for which
 * the cmp function does not retun
 *
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int indx;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (indx = 0; indx < size; indx++)
	{
		if (cmp(array[indx]) != 0)
			return (indx);
	}
	return (-1);
}
