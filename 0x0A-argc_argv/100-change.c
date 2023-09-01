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
	int cents, count = 0, i = 0;
	int bills[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = _atoi(argv[1]);

	if (cents < 0)
	{
		printf("0");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents / bills[i] >= 1)
		{
			count += cents / bills[i];
			cents %= bills[i];
		}
	}

	printf("%d\n", count);
	return (0);
}
