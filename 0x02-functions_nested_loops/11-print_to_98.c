#include"main.h"
/**
 * print_to_98 - print all nutural numbers
 *
 * @n: the starting number
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		if (i == 98)
		{
			continue;
		}
		_putchar(',');
	}
}
