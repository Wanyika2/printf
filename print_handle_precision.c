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
	int i = *j = 1;
	int prec = -1;

	if (format[i] != '.')
		return (prec);

	prec = 0;

	for (i += 1; format[i] != '\0'; i++)
	{
		if (is_digit(format[i]))
		{
			prec *= 10;
			prec += format[i] - '0';
		}
		else if (format[i] == '*')
		{
			i++;
			prec = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*j = i - 1;

	return (prec);
}
