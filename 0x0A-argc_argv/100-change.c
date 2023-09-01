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
	int cents = 0, count = 0;

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
	else
	{
		while (cents / 25 > 1)
		{
			count = cents / 25;
			cents %= 25;
		}
		while (cents / 10 > 1)
		{
			count += cents / 10;
			cents %= 10;
		}
		while (cents / 5 > 1)
		{
			count += cents / 5;
			cents %= 5;
		}
		while (cents / 2 > 1)
		{
			count += cents / 2;
			cents %= 2;
		}
		if (cents)
			count++;
	}
	printf("%d\n", count);
	return (0);
}
