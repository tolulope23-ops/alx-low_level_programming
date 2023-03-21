#include "main.h"
/**
 * print_print_alphabet_x10 - print the alphabet in lowercase ten times
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int j;
	int k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
