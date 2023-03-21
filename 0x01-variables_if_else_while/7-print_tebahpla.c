#include<stdio.h>
/**
 * main - Entry point
 * Description - Write all the alphabets in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 25; i++)
	{
		putchar(i + 97);
	}
	putchar('\n');
	return (0);
}
