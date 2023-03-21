#include<stdio.h>
/**
 * main - Entry point
 * Description - Print base16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int d;
	int e;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	for (e = 97; e <= 102; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
