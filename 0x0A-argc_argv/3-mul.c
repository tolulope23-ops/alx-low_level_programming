#include"main.h"
#include<stdio.h>

/**
 * main - Function that multiply two numbers together
 *
 * @argv: Argumrnts
 * @argc: Number of argument
 *
 * Return: 0 if true 1 if false
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
printf("Error\n");
return (1);
}
