#include "variadic_functions.h"
/**
 *print_all - print all the arguments
 *@format: string
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *word;
	char *sep = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				word = va_arg(args, char *);
				if (word == NULL)
					word = "(nil)";
				printf("%s%s", sep, word);
				break;
			default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
