#include"main.h"
/**
 * _strcat - function that concatenates two string
 *
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src, int n)
{
        int length_of_string;
        int b;

        length_of_string = 0;
        while (dest[length_of_string] != '\0')
        {
                length_of_string++;
        }
        for (b = 0; b < n && src[b] != '\0'; b++, length_of_string++)
        {
                dest[length_of_string] = src[b];
        }
        dest[length_of_string] = '\0';
        return (dest);
}

