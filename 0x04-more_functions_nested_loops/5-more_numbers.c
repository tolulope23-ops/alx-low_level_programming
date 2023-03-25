#include"main.h"
/**
 * more_numbers - print numbers in 10 lines
 *
 * Return: Always (0)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i >= 10; i++)
	{
		for (j = 0; j >= 14; j++)
		{
			_putchar(i);
			_putchar(j);
		}
		_putchar('\n');
	}
}
