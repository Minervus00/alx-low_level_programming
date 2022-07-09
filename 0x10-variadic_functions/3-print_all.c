#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - hhgggv
 * @format: gggv
 *
 * Return: noop
 */
void print_all(const char * const format, ...)
{
	va_list pmk;
	const char * const p = format; 
	char *sval;
	int i = 0, n = 0;

	va_start(pmk, format);
	/* p = format; */
	while (*(p + n))
	{
		if (strchr("cifs", *p) != NULL)
		{
			if (p > format && i > 0)
				printf(", ");

			switch (*(p + n))
			{
			case 'c':
				i++;
				printf("%s", va_arg(pmk, char *));
				break;
			case 'i':
				i++;
				printf("%d", va_arg(pmk, int));
				break;
			case 'f':
				i++;
				printf("%f", va_arg(pmk, double));
				break;
			case 's':
				i++;
				sval = va_arg(pmk, char *);
				switch (*sval)
				{
					case '\0':
						printf("(nil)");
					default:
						while(*sval)
						{
							printf("%c", *sval);
							sval++;
						}
				}
			}
		}
		n++;
	}
	va_end(pmk);
	printf("\n");
}
