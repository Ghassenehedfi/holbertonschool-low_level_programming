#include "dog.h"

/**
 * _strlen - get length of string
 *
 * @s: string
 *
 * Return: length
 **/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * _strcpy - copy a string to another string
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer string
 **/
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = _strlen(src);

	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}


	return (src);
}


/**
 * _strdup - duplicate string in new memory addr
 * @str: string
 *
 * Return: new string addr
 **/
char *_strdup(char *str)
{
	char *s;
	unsigned int l;


	if (str == NULL)
	{
		return (NULL);
	}

	else
	{

		l = _strlen(str);
		s = malloc(l + 1);
		if (s == NULL)
		{
			return (NULL);
		}
		_strcpy(s, str);

	}

	return (s);
}

/**
 * new_dog - creating a dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: pointer to dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	/* char *dname; */
	/* char *downer; */

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}


	dog->age = age;

	return (dog);
}
