#include "main.h"

/**
 * print - selects the right printing function
 * depending on the specifier passed to printf
 * @k: character holding conversion specifier
 *
 * Return: pointer to the matching printing function
 */

int (*print(char k))(va_list, flags_t *)
{
	ph func[] = {

	{'i', print_i},
	{'d', print_d},
	{'u', print_unsigned},
	{'o', print_oct},
	{'x', print_hex},
	{'X', print_HEX},

	};
	int flags = 6;
	int p;

	for (p = 0; p < flags; p++)
	if (func[p].c == k)
	return (func[p].f);

	return (NULL);
}
