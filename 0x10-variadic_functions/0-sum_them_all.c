#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int sum = 0, i;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		int n = va_arg(lst, unsigned int);

		sum += n;
	}
	va_end(lst);
	return (sum);
}
