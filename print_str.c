#include "main.h"

/**
 * print_string - Called when format specifier is s
 * @ap: va_list variable
 *
 * Return: Length of string printed
 * -1 if error occurs
 */
int print_string(va_list ap)
{
	int flen;

	flen = print_str(va_arg(ap, char *));
	if (flen < 0)
		return (-1);
	return (flen);
}

/**
 * print_str - Prints a plain string
 * @str: String to print
 *
 * Return: Length of string
 * -1 if error occurs
 */
int print_str(const char *str)
{
	int len = 0;

	if (!str)
		return (-1);

	while (*str)
	{
		if (_putchar(*str) < 0)
			return (-1);
		len++;
		str++;
	}

	return (len);
}
