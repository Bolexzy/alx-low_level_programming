#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: a list of types of arguments passed to the function.
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *sep = "";

	va_list vl;

	va_start(vl, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(vl, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(vl, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(vl, double));
				break;
			case 's':
				str = va_arg(vl, char *);
				if (str)
				{
					printf("%s%s", sep, str);
					break;
				}
				printf("(nil)");
				break;
			default:
				i++;
				continue;
		} sep = ", ";
		i++;
	}
	printf("\n"), va_end(vl);
}
