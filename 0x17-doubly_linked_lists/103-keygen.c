#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * magicKeyGenerator - cook up a secret sauce based on a username for my awesome app
 * @argc_boi: the number of things you threw at this program
 * @argv_boi: the things you threw, like a username
 *
 * Return: 0 if it worked, 1 if something went sideways
 */
int main(int argc_boi, char *argv_boi[])
{
	unsigned int j, a;
	size_t len, add;
	char *sauce;
	char recipe[7] = "      ";

	sauce = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc_boi != 2)
	{
		printf("Bruh, use it right: ./secretgen username\n");
		return (1);
	}
	len = strlen(argv_boi[1]);
	recipe[0] = sauce[(len ^ 59) & 63];
	for (j = 0, add = 0; j < len; j++)
		add += argv_boi[1][j];
	recipe[1] = sauce[(add ^ 79) & 63];
	for (j = 0, a = 1; j < len; j++)
		a *= argv_boi[1][j];
	recipe[2] = sauce[(a ^ 85) & 63];
	for (a = argv_boi[1][0], j = 0; j < len; j++)
		if ((char)a <= argv_boi[1][j])
			a = argv_boi[1][j];
	srand(a ^ 14);
	recipe[3] = sauce[rand() & 63];
	for (a = 0, j = 0; j < len; j++)
		a += argv_boi[1][j] * argv_boi[1][j];
	recipe[4] = sauce[(a ^ 239) & 63];
	for (a = 0, j = 0; (char)j < argv_boi[1][0]; j++)
		a = rand();
	recipe[5] = sauce[(a ^ 229) & 63];
	printf("Voila! Your secret sauce is: %s\n", recipe);
	return (0);
}
