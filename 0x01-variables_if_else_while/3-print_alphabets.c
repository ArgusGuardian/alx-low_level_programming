#include <stdio.h>
/**
 * main - function
 *
 *Return: always 0
 */
int main(void)
{
	char a = 'a', A = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
