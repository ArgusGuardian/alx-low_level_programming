#include "main.h"
/**
 * print_rev - function to write string in reverse
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	while (len >= 0)
	{
		putchar(*s);
		len--;
		s--;
	}
	putchar('\n');
}
