#include<stdio.h>
/**
 * main - Entry point
 * Description - Print all possible combination of single digits
 * Return: 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
		if (j == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
