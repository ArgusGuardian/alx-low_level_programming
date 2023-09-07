#include "main.h"

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int str_length(char *str)
{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}

char *multiply(char *num1, char *num2)
{
	int len1 = str_length(num1);
	int len2 = str_length(num2);

	int result_len = len1 + len2;
	char *result = calloc(result_len + 1, sizeof(char));

	if (result == NULL)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	int carry = 0;
	for (int i = len1 - 1; i >= 0; i--)
	{
		int n1 = num1[i] - '0';

		for (int j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';

			int product = (n1 * n2) + (result[i + j + 1] - '0') + carry;
			carry = product / 10;

			result[i + j + 1] = (product % 10) + '0';
		}
	}

	return result;
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return 98;
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i] != '\0'; i++)
	{
		if (!is_digit(num1[i]))
		{
			fprintf(stderr, "Error\n");
			return 98;
		}
	}

	for (int i = 0; num2[i] != '\0'; i++)
	{
		if (!is_digit(num2[i]))
		{
			fprintf(stderr, "Error\n");
			return 98;
		}
	}

	char *result = multiply(num1, num2);

	int leading_zeros = 1;
	for (int i = 0; result[i] != '\0'; i++)
	{
		if (result[i] != '0')
		{
			leading_zeros = 0;
			break;
		}

		if (leading_zeros)
			printf("0\n");
		else
			printf("%s\n", result);
		free(result);
		return 0;
	}
}
