#include "main.h"
/**
 * _atoi - copy string from src to dest
 * @s: pointer to string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, a = 1, alert = 0;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			a *= -1;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			i++;
			alert = 1;
		}
		if (alert)
			return (a * num);

		i++;
	}
	return (0);
}
