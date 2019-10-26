#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers -  that prints numbers, followed by a new line
 * @n : cons unsigned int
 * @separator : pointer
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int num = 0;

	if (separator == NULL)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
