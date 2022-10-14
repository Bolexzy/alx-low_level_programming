#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 *
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;
	char *str;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vl, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < (n - 1))
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(vl);
}
