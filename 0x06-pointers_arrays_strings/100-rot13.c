#include "main.h"
/**
 * rot13 - cipher a string
 * @str: pointer to string
 * Return: pointer to string
 */
char *rot13(char *str)
{
	char array1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char array2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int i = 0, j;

	while (str[i] != '\0')
	{
		j = 0;
		while (array1[j] != '\0')
		{
			if (str[i] == array1[j])
			{
				str[i] = array2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
