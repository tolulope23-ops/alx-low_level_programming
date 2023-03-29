#include"main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string pointer
 *
 * @src: source string pointer
 *
 * @n: number of bytes to be used
 * Return: pointer to destination string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int no_byte;

	for (no_byte = 0; no_byte < n && src[no_byte] != '\0'; no_byte++)
	{
		dest[no_byte] = src[no_byte];
	}
	for (; no_byte < n; no_byte++)
	{
		dest[no_byte] = '\0';
	}
	return (dest);
}
