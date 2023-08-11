#include <stdio.h>
/**
 * main - function
 *
 *Return: always 0
 */
int main(void)
{
	char a = 'z';
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
