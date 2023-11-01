#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 * @s1: the first string
 * @s2: teh second string
 * Return: the concatenating string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i;
	int len1;
	int len2;
	int len_total;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1])
		len1++;
	len2 = 0;
	while (s2[len2])
		len2++;
	len_total = len1 + len2 + 1;
	new_string = malloc(sizeof(char) * len_total);
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		new_string[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		new_string[len1 + i] = s2[i];
		i++;
	}
	new_string[len_total] = '\0';
	return (new_string);
}
