#include "main.h"

/**
 * main - print numbers from 1 to 100
 * Return: always 0;
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz\n");
			break;
		}

		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else
			printf("%d ", i);
	}
	return (0);
}
