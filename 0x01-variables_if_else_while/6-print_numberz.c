#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints number of base 10 using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	printf("\n");
	return (0);
}
