#include"main.h"
/**
 * _strcpy - copies the string pointed to
 *
 * @dest: chat type string
 * @src: char type string
 * Description: copy the string pointed to by pointer
 * 'src' to buffer pointed to by dest
 *
 * Return: pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
        int a = -1;

        do {
                a++;
                dest[a] = src[a];
        } while (src[a] != '\0');
        return (dest);
}
