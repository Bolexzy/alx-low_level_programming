#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 *
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;

	va_start(vl, n);

	for (i = 0; i < (n - 1); i++)
		if (separator)
			printf("%d%s", va_arg(vl, int), separator);

	printf("%d\n", va_arg(vl, int));
	va_end(vl);
}
