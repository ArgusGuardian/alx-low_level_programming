#include "main.h"
/**
 * print_alphabet_x10 - Function
 * Description: prints the alpha ten times
 */
void print_alphabet_x10(void)
{
	int i;
	char A;

	for (i = 0; i < 10; i++)
	{
		A = 97;
		while (A != 123)
		{
			_putchar(A);
			A++;
		}
		_putchar('\n');
	}
}
