#include "dog.h"
#include <stdlib.h>

/**
 * ft_strlen - calculate the length of a string
 * @s: string
 *
 * Return: the length
 */
int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * ft_strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: the copied string
 */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - new struct
 * @name: name of the dog
 * @age: his age
 * @owner: his owner
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ft_strlen(name) + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->name = ft_strcpy(dog->name, name);

	dog->age = age;

	dog->owner = malloc(sizeof(char) * (ft_strlen(owner) + 1));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = ft_strcpy(dog->owner, owner);

	return (dog);
}
