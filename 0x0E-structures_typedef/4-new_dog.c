#include "dog.h"
/**
 * new_dog - create new structure type dog_t
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: return strucutre type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new;

	if (!name || !age || !owner)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->age = age;
}

/**
 * _strdup - functinon that duplicates a string
 *@str: src string
 * Return: pointer to new string Null if fails
 *
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
		len++;
	}

	duplicate = (char *)malloc(len + 1);
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[i] = '\0';

	return (duplicate);
}
