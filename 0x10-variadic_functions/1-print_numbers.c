#include "variadic_functions.h"

/**
 * print_numbers - with separator
 *
 * @separator: it is the string separator
 * @n: it is the number of arguments
 *
 * @...: it is yhe integers to print
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
