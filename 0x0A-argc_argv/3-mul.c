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
	long int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	printf("%ld\n", x * y);

	return (0);
}
