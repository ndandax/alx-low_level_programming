#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - Function that returns sum of numbers
 *@n: first argument
 *Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	if (n == 0)
		return (0);
	return (sum);
}
