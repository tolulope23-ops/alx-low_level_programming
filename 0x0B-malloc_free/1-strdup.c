#include"main.h"
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter
 * @str: char
 * Return: 0 (Always)
 */
char *_strdup(char *str)
{
	char *n;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	n = malloc(sizeof(char) * (i + 1));

	if (n == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		n[r] = str[r];
	return (n);
}
