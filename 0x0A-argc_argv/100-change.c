#include <stdlib.h>
#include <stdio.h>

/**
 * main - thattt
 * @argc: ghhs
 * @argv: ggqq
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, cent, cnt = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (cent >= coins[i])
		{
			cnt += (cent / coins[i]);
			cent %= coins[i];
		}
	}
	printf("%d\n", cnt);

	return (0);
}
