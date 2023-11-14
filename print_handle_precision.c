#include "main.h"
/**
 * handle_precision - handles precision
 * @format: formatted string in which to print
 * @j: list of arguments
 * @list: arguments list
 *
 * Return: precision
 */
int handle_precision(const char *format, int j, va_list list)
{
	int precision = -1;

	if (format[j] == '.')
	{
		j++;

		if (format[j] == '*')
		{
			precision = va_arg(
					list, int);
			j++;
		}
		else
		{
			precision = 0;
			while (format[j] >= '0' &&
					format[j] <= '9')
			{
				precision = precision * 10
					+ (format[j++] - '0');
			}
		}
	}
	return (precision);
}
