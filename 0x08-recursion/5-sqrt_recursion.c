#include <math.h>

/**
 * _sqrt_recursion - oossss
 * @n: hhqqq
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	double h;

	if (n < 0)
		return (-1);

	h = sqrt(n);
	if ((int) h == h)
		return (h);
	else
		return (-1);
}
