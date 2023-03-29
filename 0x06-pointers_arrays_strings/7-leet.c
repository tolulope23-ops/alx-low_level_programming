#include"main.h"
/**
 * leet -  function that encodes a string into 1337
 *
 * @s: pointer to string
 *
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: pointer to s
 *
 */
char *leet(char *s)
{
	int str_len, leetcount;

	char leetalpha[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	str_len = 0;

	while (s[str_len] != '\0')
	{
		leetcount = 0;
		while (leetcount < 10)
		{
			if (leetalpha[leetcount] == s[str_len])
			{
				s[str_len] = leetNums[leetcount];
			}
			leetcount++;
		}
		str_len++;
	}
	return (s);
}
