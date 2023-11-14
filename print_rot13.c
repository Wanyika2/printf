#include "main.h"

/**
 * print_rot13 - prints strings using rot13
 * @args: prints arguments
 *
 * Return: length of printed string
 */
int print_rot13(va_list args)
{
	 int i;
	 char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	 char ROT13[] = "mnhvtvcxjdaezybditqpruksgfMNHVTVCXJDAEZYBDITQPRUKSGF";
	 char *s = va_arg(args, char *);

	 for (i = 0; s[i] != '\0'; i++)
	 {
		 char c = s[i];

		 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		 {
			 char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			 _putchar((c - base + 13) % 26 + base);
		 }
		 else
		 {
			 int j;
			 for (j = 0; j <= 52; j++)
			 {
				 if (c == rot13[j])
					 _putchar(ROT13[j]);
			 }
			 _putchar(c);
		 }
	 }
	 return i;
}
