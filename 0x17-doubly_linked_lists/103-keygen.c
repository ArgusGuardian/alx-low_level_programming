#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - generate a pass depending on username for the app
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 if it worked, 1 if something went sideways
 */
int main(int argc, char *argv[])
{
	unsigned int j, a;
	size_t lenght, sum;
	char *sauce;
	char recipe[7] = "      ";

	sauce = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	lenght = strlen(argv[1]);
	recipe[0] = sauce[(lenght ^ 59) & 63];
	for (j = 0, sum = 0; j < lenght; j++)
		sum += argv[1][j];
	recipe[1] = sauce[(sum ^ 79) & 63];
	for (j = 0, a = 1; j < lenght; j++)
		a *= argv[1][j];
	recipe[2] = sauce[(a ^ 85) & 63];
	for (a = argv[1][0], j = 0; j < lenght; j++)
		if ((char)a <= argv[1][j])
			a = argv[1][j];
	srand(a ^ 14);
	recipe[3] = sauce[rand() & 63];
	for (a = 0, j = 0; j < lenght; j++)
		a += argv[1][j] * argv[1][j];
	recipe[4] = sauce[(a ^ 239) & 63];
	for (a = 0, j = 0; (char)j < argv[1][0]; j++)
		a = rand();
	recipe[5] = sauce[(a ^ 229) & 63];
	printf("%s\n", recipe);
	return (0);
}
