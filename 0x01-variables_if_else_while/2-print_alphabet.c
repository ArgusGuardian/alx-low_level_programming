#include <stdio.h>
/**
 * main - function
 *
 *Return: always 0
 */
int main(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
