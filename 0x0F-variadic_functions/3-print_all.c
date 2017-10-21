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
	int i = 0;
	int j;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		switch (format[i])
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
			j = 1;
			break;
		}
		if (j == 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
