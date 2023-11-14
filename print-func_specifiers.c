#include "main.h"
/**
 * print - selects the right printing function
 * depending on the specifier passed to printf
 * @k: character holding conversion specifier
 *
 * Return: pointer to the matching printing function
 */
int (*print(char k))(va_list, flats_t *)
{
	ph func[] =

	{
		{'i', print_int},
		{'d', print_int},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print-HEX_extra},
		{'r', print_rev},
		{'R', print_rot13},
		{'s', print_string},
		{'b', print_binary},
		{'S', print-exc_string},
		{'p', print_address},
		{'%', print_percent},
		{'c', print_char}
	};
	int flags = 14;

	int p;

	for (p = 0; p < flags; p++)
		if (func[p].c == s)
			return (func[p].f);
	return (NULL);
}
