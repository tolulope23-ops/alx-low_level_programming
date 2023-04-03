#include"main.h"
/**
 * _memset - Function that fills a memory with a constant byte
 *
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of bytes of the memory area pointed to
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
