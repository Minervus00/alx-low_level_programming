#include <stdio.h>

/**
 * main - desxsd
 *
 * Return: (0) success
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
