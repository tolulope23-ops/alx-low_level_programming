#include"main.h"
/**
 * _strchr - Function that locates a character in string
 *
 * @s: The string to be searched
 * @c: The character to be located
 * Return: If c is found - a pointer to the first occurence
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int indx;

	for (indx = 0; s[indx] >= '\0'; indx++)
	{
		if (s[indx] == c)
			return (s + indx);
	}
	return ('\0');
}
