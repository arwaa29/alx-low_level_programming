#include "variadic_functions.h"


/**
 * sum_them_all - sums variable arguments
 *
 * @n: it is  the number of arguments
 * @...: it is the integers to sum
 *
 * Return: the integer sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int x = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		x += va_arg(ap, int);
	va_end(ap);
	return (x);
}
