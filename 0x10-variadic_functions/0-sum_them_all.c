#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: Number of paramters passed to the function.
 * @...: Define a variadic function
 * Return: If n == 0 return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i, sum = 0;

	va_start(arg_list, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(arg_list, int);

	va_end(arg_list);

	return (sum);
}
