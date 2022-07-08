#include <stdarg.h>

/**
 * sum_them_all - iisdww
 * @n: hh
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list np;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(np, n);
	for (i = 0; i < n; i++)
		sum += va_arg(np, int);
	va_end(np);
	return (sum);
}
