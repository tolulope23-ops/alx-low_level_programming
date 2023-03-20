#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - A program that prints a number if its negative,positive or equals to zero
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Last digit of %d is greater than Zero", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is equals to zero", n);
	}
	else
	{
		printf("Last digit of %d is less than zero", n);
	}
	return (0);
}
