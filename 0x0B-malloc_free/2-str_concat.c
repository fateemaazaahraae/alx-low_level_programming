#include"main.h"
#include<stdlib.h>
/**
 * _strlen - calculate lenght of an array
 * @s: array
 * Return: lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * str_concat - concatenatess two strings
 * @s1: first string
 * @s2: second string
 * Return: arraytotal of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int lenght;
	char *arraytotal;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lenght = 1;
	lenght = _strlen(s1) + _strlen(s2);

	arraytotal = malloc(sizeof(char) * lenght);
	if (arraytotal == NULL)
	{
		return (NULL);
	}
	else
	{
		int i, j;

		i = j = 0;
		while (s1[i] != '\0')
		{
			arraytotal[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			arraytotal[i] = s2[j];
			i++;
			j++;
		}
		arraytotal[i] = '\0';
	}
	return (arraytotal);
}
