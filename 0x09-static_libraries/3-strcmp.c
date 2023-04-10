#include"main.h"
/**
 * _strcmp - function that compares two string
 *
 * @s1: first string
 *
 * @s2: second character
 *
 * Return: less than 0 if string is less than the other,
 * greater than 0 if string is greater than the other
 *
 */
int _strcmp(char *s1, char *s2)
{
        int count;
        int cmp_value;

        count = 0;
        while (s1[count] == s2[count] && s1[count] != '\0')
        {
                count++;
        }
        cmp_value = s1[count] - s2[count];
        return (cmp_value);
}
