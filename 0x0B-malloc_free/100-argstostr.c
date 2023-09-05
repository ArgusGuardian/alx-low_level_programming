#include "main.h"
/**
 * argstostr - concat all the arguments
 *@ac: number of arguments
 *@av: pointer to strings
 *Return: return poitner to string, NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
	}
	len += ac + 1;
	concat = (char *)malloc(len);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concat[k] = av[i][j];
			j++;
			k++;
		}
		concat[k] = '\n';
		k++;
	}
	concat[k] = '\0';
	return (concat);
}
