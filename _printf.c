#include "main.h"

/**
 * _printf - A function that selects the correct function to print.
 * @format: Identifier to look for.
 * Return: Length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_s}, {"%c", print_c}, {"%i", print_i},
		{"%d", print_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%%", print_37}, {"%o", print_oct},
		{"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};
	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || format[0] == '\0')
	{
		va_end(args);
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (j = 13; j >= 0; j--)
			{
				if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
				{
					length += p[j].function(args);
					i += 2;
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			length++;
			i++;
		}
	}
	va_end(args);
	return (length);
}
