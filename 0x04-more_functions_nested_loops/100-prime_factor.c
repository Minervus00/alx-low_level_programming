#include <stdio.h>

/**
 * main - largest prime factor
 * of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int nbr = 612852475143;
	/* int cnt; */
	int m = 1;

	while (nbr != 1 && m <= nbr)
	{
		m = m + 2;
		/* cnt = 0; */
		while (nbr % m == 0)
		{
			/**
			 * cnt++;
			 * printf("%d diviseur %d fois\n", m, cnt);
			 */
			nbr = nbr / m;
		}
	}
	printf("%d\n", m);

	return (0);
}
