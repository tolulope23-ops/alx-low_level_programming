#include"main.h"
char **strtow(char *str);

/**
 * count_word - function assisting to
 * count the number of words in a string
 * @s: string to check or use
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}
	return (b);
}
/**
 * **strtow - splits a string of characters into words
 * @str:  string to split
 * Return: pointer to an array of strings (success)
 * or null (Error)
 */

char **strtow(char *str)
{
	char **mat, *temp;
	int i, k = 0, len = 0, words, c = 0, begin, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);

				while (begin < end)
				*temp++ = str[begin++];
				*temp = '\0';
				mat[k] =  temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = i;
	}
	mat[k] = NULL;
	return (mat);

}
