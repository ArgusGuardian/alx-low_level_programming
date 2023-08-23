#include "main.h"
/**
 * cap_string - Capitalizing the first char
 * @str: pointer to string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[13] = {',',
					';',
					'.',
					'!',
					'?',
					'\"',
					'(',
					')',
					'{',
					'}',
					' ',
					'\t',
					'\n'};

	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j] && (str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				i++;
				str[i] = str[i] - 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}
