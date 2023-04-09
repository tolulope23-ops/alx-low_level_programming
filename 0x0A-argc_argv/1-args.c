#include<stdio.h>
#include"main.h"
/**
 * main - Function that print the number of arguments passed into it
 *
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
