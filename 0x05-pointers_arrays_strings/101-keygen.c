#include "main.h"

int main(void)
{
	int sum = 0;
	int rd = 0;
	time_t t;

	srand((unsigned int)time(&t));
	while (sum < 2772)
	{

				rd = rand() % 128;

		if ((sum + rd) > 2772)
			break;
		sum += rd;
		printf("%c", rd);
	}
	printf("%c\n", (2772 - sum));

	return 0;
}
