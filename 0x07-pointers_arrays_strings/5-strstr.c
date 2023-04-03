#include"main.h"
/**
 * _strstr - Locates a a substring
 *
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: if the substring is located - a pointer to the beginning
 * of the located substring
 * If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int indx;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		indx = 0;
		if (haystack[indx] == needle[indx])
		{
			do {
				if (needle[indx + 1] == '\0')
					return (haystack);
				indx++;

			} while (haystack[indx] == needle[indx]);
		}
		haystack++;
	}
	return ('\0');
}
