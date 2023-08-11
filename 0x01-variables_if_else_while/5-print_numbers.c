#include <stdio.h>
/**
 * main - function
 *
 *Return: always 0
 */
int main(void)
{
	char a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
