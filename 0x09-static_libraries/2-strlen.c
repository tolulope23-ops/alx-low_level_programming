#include"main.h"
/**
 * _strlen - checks the length of a particular string
 *
 * @s: string to be checked
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
        int str_length = 0;

        while (s[str_length])
                str_length++;
        return (str_length);
}
