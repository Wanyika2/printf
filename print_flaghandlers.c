#include "main.h"
#include <stdio.h>
/**
 * @flag_handlers - handles flags
 * @k: character that holds flag specifier
 * @ptr: pointer to the struct flags
 *
 * Return: 1 if a flag has been handled, 0
 * if otherwise
 */
int flag_handlers(char k, flags_t *ptr)
{
	int j = 0;

	switch (s)
	{
		case '+':
			f->add = 1;
			j = 1;
			break;
		case ' ':
			f->space = 1;
			j = 1;
			break;
		case '#':
			f->hash = 1;
			j = 1;
			break;
		case '0':
			f->zero = 1;
			j = 1;
			break;
		case '-':
			f->minus = 1;
			j = 1;
			break;
	}
	return (j);
}
