#include"main.h"
/**
 * string_toupper - function that convert all lowercase
 * to uppercase
 * @x: pointer to string
 *
 * Return: pointer to uppercase
 */
char *string_toupper(char *x)
{
	int len_of_string;

	len_of_string = 0;

	while (x[len_of_string] != '\0')
	{
		if (x[len_of_string] >= 97 && x[len_of_string] <= 122)
		{
			x[len_of_string] = x[len_of_string] - 32;
		}
		len_of_string++;
	}
	return (x);
}
