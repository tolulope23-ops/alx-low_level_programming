#include"main.h"
#include<time.h>
#include<stdlib.h>
/**
 * main - function that generates random valid password
 * main: generates a random number
 * Return: Always 0
 */
int main(void)
{
	int password[100];
	int j, sum, n;

	sum = 0;

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		password[j] = rand() % 78;
		sum += (password[j] + '0');
		putchar(password[j] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
