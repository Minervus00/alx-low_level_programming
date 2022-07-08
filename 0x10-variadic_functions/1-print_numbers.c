#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - sqwwxx
 * @separator: sdft
 * @n: hhh
 *
 * Return: ggg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	char sepa[10];
	unsigned int i;

	if (separator == NULL)
		strcpy(sepa, "");
	else
		strcpy(sepa, separator);

	va_start(numbs, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbs, int));
			if (i != (n - 1))
				printf("%s", sepa);
		}
	}
	printf("\n");
	va_end(numbs);
}
