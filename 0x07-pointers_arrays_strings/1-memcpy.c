#include"main.h"
/**
 * _memcpy - Function that copies memory area @src to memory area @dest
 *
 * @dest: To memory area
 *
 * @src: Bytes from memory area
 *
 * @n: Function copies
 *
 * Return: pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
