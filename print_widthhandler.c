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
	int j;
	int width = 0;

	for (j = *b + 1; format[j] != '\0'; j++)
	{
		if (is_digit(format[j]))
		{
			width *= 10;
			width += format[j] - '0';
		}
		else if (format[j] == '*')
		{
			j++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = j - 1;

	return (width);
}
