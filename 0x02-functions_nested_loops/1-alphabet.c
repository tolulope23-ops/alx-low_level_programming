#include"main.h"
/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int k;

	for (k = 97; k <= 122; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
