#define UNUSED(x) (void)(x)
#include "main.h"

/**
 * print_oct - prints an octal number.
 * @val: arguments.
 * @f: unused.
 * Return: counter.
 */
int print_oct(va_list val, flags_t *f)
{

	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	UNUSED(f);
	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
