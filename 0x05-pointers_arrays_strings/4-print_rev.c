#include"main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: the variable holding the string
 *
 * Return: reversed string and a newline
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
