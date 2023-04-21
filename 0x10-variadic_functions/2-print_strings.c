#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator:String to be printed between strings.
 * @n: Number of strings passed to the function.
 * @...: Variadic function.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	char *str;
	unsigned int i;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg_list);
}
