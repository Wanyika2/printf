#include "main.h"
/**
 * width_handler - function that handles the width
 * for conversion specifiers
 * @format: formatted string
 * @b: to be printed
 * @list: arguments list
 *
 * Return: width
 */
int width_handler(const char *format, int *b, va_list list)
{
	int width = 0;

	while (format[*b} >= '0' && format[*b] <= '9')
	{
		width = width * 10 + (format[(*b)++] - '0')
	}
	if (format[*b] == '*')
	{
		width = va_arg(list, int);
		(*b)++;
	}
	return (width);
}
