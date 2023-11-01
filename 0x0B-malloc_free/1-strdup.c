#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate memory for a string and copy it
 * @str: string
 * Return:string
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *ptr;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	len++;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
