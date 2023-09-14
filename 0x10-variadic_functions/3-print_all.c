#include "variadic_functions.h"
/**
 *print_all - print all the arguments
 *@format: string
 */
void print_all(const char *const format, ...)
{
	int i = 0, alert = 1;
	va_list args;
	char *word;
	char *sep = "";

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			alert += 1;
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'i':
			alert += 1;
			printf("%s%d", sep, va_arg(args, int));
			break;
		case 'f':
			alert += 1;
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 's':
			alert += 1;
			word = va_arg(args, char *);
			if (word == NULL)
				printf("%s(nil)", sep);
			else
				printf("%s%s", sep, word);
			break;
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
}
