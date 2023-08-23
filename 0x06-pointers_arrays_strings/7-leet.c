#include "main.h"
/**
 * leet - leet a string 1337
 * @str: pointer to string
 * Return: pointer to string
 */
char *leet(char *str)
{
	char array1[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char array2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j;

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
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
