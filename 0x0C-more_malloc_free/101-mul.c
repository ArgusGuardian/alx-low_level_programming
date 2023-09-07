#include "main.h"
/**
 * _isNumber - Checks if a string is a number.
 * @str: Pointer to the string.
 * Return: 1 if not a number, 0 if a number.
 **/
int _isNumber(char *str)
{
	for (int i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return 1; // Not a number
	return 0;		  // It's a number
}
/**
 * multiplyStrings - Multiplies a string by a single digit.
 * @num1: The string to be multiplied.
 * @digit: The single digit to multiply by.
 * @result: The result string.
 * @len1: The length of num1.
 * @lenResult: The length of the result.
 **/
void multiplyStrings(char *num1, char digit, char *result, int len1, int lenResult)
{
	int carry = 0;
	for (int i = len1 - 1, j = lenResult - 1; i >= 0; i--, j--)
	{
		int product = (num1[i] - '0') * (digit - '0') + (result[j] - '0') + carry;
		carry = product / 10;
		result[j] = (product % 10) + '0';
	}
	while (carry)
	{
		int sum = (result[lenResult - 1] - '0') + carry;
		carry = sum / 10;
		result[lenResult - 1] = (sum % 10) + '0';
		lenResult--;
	}
}
/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 if successful, 98 if there's an error.
 **/
int main(int argc, char *argv[])
{
	int resultLength, len1 = 0, len2 = 0;
	char *num1 = argv[1];
	char *num2 = argv[2];
	char *result;
	if (argc != 3 || _isNumber(argv[1]) || _isNumber(argv[2]))
	{
		fprintf("Error\n");
		return (98);
	}

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	resultLength = len1 + len2;
	result = calloc(resultLength + 1, sizeof(char));

	if (result == NULL)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}

	for (int i = len2 - 1, position = 0; i >= 0; i--, position++)
		multiplyStrings(num1, num2[i], result, len1, resultLength - position);

	int leadingZeros = 1;
	for (int i = 0; result[i]; i++)
	{
		if (result[i] != '0')
		{
			leadingZeros = 0;
			break;
		}
	}
	if (leadingZeros)
		printf("0\n");
	else
		printf("%s\n", result);
	free(result);
	return (0);
}
