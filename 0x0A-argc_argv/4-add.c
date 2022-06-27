#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * checker - pooo
 * @str: yoo
 *
 * Return: int
 */
int checker(char *str)
{
	int k, length = strlen(str);

	for (k = 0; k < length; k++)
	{
		if (!(isdigit(str[k])))
			return (1);
	}
	return (0);
}

/**
 * main - ooo
 * @argc: oiid
 * @argv: jsdd
 *
 * Return: intt
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (checker(argv[i]) == 0)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
