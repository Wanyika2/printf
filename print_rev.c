#include "main.h"
/**
 * print_rev - prints reverse string
 * @args: arguments
 * @k: printed characters
 *
 * Return: length of output
 */
int print_rev(va_list args, int k)
{
	int a = 0, i = 0;
	char *ptr = va_arg(args, char *);

	while (ptr[a])
	{
		a++;
	}

	for (i = a - 1; i >= 0; i--)
	{
		_putchar(ptr[i]);
		k++;
	}
	return (k);
}
