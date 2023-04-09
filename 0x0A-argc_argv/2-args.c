#include"main.h"
#include<stdio.h>
/**
 * main - Function that print every character entered
 *
 * @argc: The number of arguments
 * @argv: The name of the arguments
 *
 * Return: Always 0(sucess)
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 0)
	{
		while (sum < argc)
		{
			printf("%s\n", argv[sum]);
			sum++;
		}
	}
	return (0);
}
