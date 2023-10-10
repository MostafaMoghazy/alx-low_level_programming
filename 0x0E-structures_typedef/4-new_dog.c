#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strcpy - copies the string from place to another in mem
 * to the buffer pointed to by dest
 * @dest: pointer to string destination
 * @src: string to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0, y;

	while (src[length] != '\0')
	{
		length++;
	}

	for (y = 0; y < length; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: 1st argument
 * @age: 2nd argument
 * @owner: 3rd argument
 *
 * Return: pointer to new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
