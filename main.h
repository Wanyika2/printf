#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;
/**
 * printHandler - struct that handles flags
 * @c: character on test
 * @f: integer pointer
 * @ap: argument
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;
/**
 * struct flags - contains flags
 * @add: flag for the '+' character
 * @space: flag for ' ' character
 * @hash: flag for '#' character
 */
typedef struct flags
{
	int add;
	int space;
	int hash;
}flags_t;

int rev_string(char *s);
int *_strcpy(char *dest, char *src);
int print_pointer(va_list val);
int print_unsigned(va_list args);
int print_hex_extra(unsigned long int num);
int _strlenc(const char *s);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_oct(va_list val);
int _printf(const char *format, ...);
int print_bin(va_list val);
int print_revs(va_list args);
int print_i(va_list args);
int print_d(va_list args);
int _strlen(char *s);
int print_37(void);
int print_c(va_list val);
int print_s(va_list val);
int _putchar(char c);
void print_rot13(const char *str);
int width_handler(const char *format, int *b, va_list list);
int handle_precision(const char *format, int j, va_list list);
int print_rot13(va_list list, flags_t *flag);
#endif
