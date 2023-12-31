#include "variadic_functions.h"
/**
 *print_strings - print all the arguments
 *@n: number of arguments
 *@separator: string that seperates the arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *word;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i != 0)
			printf("%s", separator);
		word = va_arg(args, char *);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
	}
	va_end(args);
	printf("\n");
}
