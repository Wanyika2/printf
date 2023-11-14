#include "main.h"
/**
 * print_rot13 - prints a rotated string
 * @list: argument list
 * @f: pointer to the struct flags
 *
 * Return: number of characters processed
 */
int print_rot13(va_list list, flags_t *f)
{
	int i;
	char rot13[] = "poiuytrewqasdfghjklmnbvcxzPOIUYTREWQASDFGHJKLMNBVCXZ";
	char ROT13[] = "POIUYTREWQASDFGHJKLMNBVCXZpoiuytrewqasdfghjklmnbvcxz";
	const char *input = va_arg(list, const char *);

	if (input == NULL)
	{
		return (0);
	}
	for (i = 0; input[i] != '\0'; i++)
	{
		char c = input[i];

		if ((c >= 'a' && c <= 'z') ||
				(c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' &&
					c <= 'z') ? 'a' : 'A';
			_putchar((c - base + 13) % 26 + base);
		}
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (c == rot13[i])
				_putchar (ROT13[i]);
			_putchar(c);
			}
		}
	}
	return (i);
}
