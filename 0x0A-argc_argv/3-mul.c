#include <stdio.h>
#include <stdlib.h>

/**
 * main - ooo
 * @argc: oiid
 * @argv: jsdd
 *
 * Return: intt
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
