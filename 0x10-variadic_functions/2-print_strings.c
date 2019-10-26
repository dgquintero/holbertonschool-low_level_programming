#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings: function that prints strings.
 * @n : cons unsigned int
 * @separator : pointer
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	if (n == 0)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
