#define UNUSED(x) (void)(x)
#include "main.h"

/**
 * print_hex - prints an hexadecimal number.
 * @val: arguments.
 * @f: unused.
 * Return: counter.
 */
int print_hex(va_list val, flags_t *f)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	UNUSED(f);
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}