#include <stdio.h>

/**
 * main - fizz_buzz
 *
 * Return: noooooop
 */
int main(void)
{
	int i;
	char f[] = "Fizz", b[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%s", f);

		if (i % 5 == 0)
			printf("%s", b);

		else if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);

		if (i < 100)
			printf(" ");

		else
			printf("\n");
	}

	return (0);
}
