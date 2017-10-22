#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i;
	int j;

	va_start(ap, format);
	i = 0;
	while (format !=  NULL && format[i] != '\0')
	{
		j = 1;
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			printf("%s", s);
			break;
		default:
			j = 0;
			break;
		}
		if (j && format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
