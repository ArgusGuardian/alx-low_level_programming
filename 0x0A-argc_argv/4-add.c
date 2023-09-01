#include <stdio.h>
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

/**
 * main - function
 *@argc: number of arguments
 *@argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 1, j = 0, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += _atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
