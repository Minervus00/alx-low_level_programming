#include <stdio.h>

/**
 * main - buhbhbh
 *
 * Return: (0) ggh
 */
int main(void)
{
	char x, alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		x = alpha[i];
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	putchar('\n');

	return (0);
}
