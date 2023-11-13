#include "main.h"
#include <stdio.h>
/**
 * print_rot13 - function that prints rot 13'ed
 * @str: points to the first character of null-terminated string
 *
 * Return: void
 */
void print_rot13(const char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			char base = (*str >= 'A' && *str >= 'Z') ? 'A' :  'a';
		}
		putchar(((*str - base + 13) % 26) + base);
	}
	else
	{
		putchar(*str);
	}
	str++;
}
/**
 * print_rot13 - prints strings using rot13
 * @list: list of arguments
 * @flags: pointer to struct flags
 *
 * Return: length of printed string
 */
int print_rot13(va_list list, flags_t *flags)
{
	int p, q;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "mnhvtvcxjdaezybditqpruksgfMNHVTVCXJDAEZYBDITQPRUKSGF";
	char *s = va_arg(list, char *);

	for (q = 0; s[q]; q++)
	{
		if (s[q] < 'A' || (s[q] > 'Z' && s[q] < 'a') || s[q] > 'z')
			_putchar(s[q]);
		else
		{
			for (p = 0; p <= 52; p++)
			{
				if (s[q] == rot13[p])
					_putchar(ROT13[p]);
			}
		}
	}
	return (q);
}
