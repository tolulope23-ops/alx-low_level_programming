#include"main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 *
 * @s: The string to be searched
 * @accept: The prefix to be measured
 *
 * Return: The number of bytes in s which consists
 * only of bytes from accepts
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int indx;

	while (*s)
	{
		for (indx = 0; accept[indx]; indx++)
		{
			if (*s == accept[indx])
			{
				num++;
				break;
			}
			else if (accept[indx + 1] == '\0')
				return (num);
		}
		s++;
	}
	return (num);
}
