#include"main.h"
/**
 * str_concat -  function that get ends of input
 * and add them together for size
 *
 * @s1:first input to concat
 * @s2: second input to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = k = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;
	cat = malloc(sizeof(char) * (j + k + 1));

	if (cat == NULL)
		return (NULL);
	j = k = 0;
	while (s1[j] != '\0')
	{
		cat[j] = s1[j];
		j++;
	}
	while (s2[k] != '\0')
	{
		cat[j] = s2[k];
		j++, k++;
	}
	cat[j] = '\0';
	return (cat);

}
