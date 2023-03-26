#include "main.h"

/**
 * _printf - Print string based on format specifiers
 * @format: Format of the string to print
 *
 * Return: Length of actual string printed
 * -1 if an error occurs
 */
int _printf(const char *format, ...)
{
	va_list ap;
	const char *iformat = format;
	int len = 0, flen;

	if (!format)
		return (0);
	va_start(ap, format);
	while (*iformat)
	{
		if (*iformat == '%')
		{
			iformat++;
			flen = format_handle(iformat, ap);
			if (flen < 0)
				return (-1);
			len += flen;
		}
		else
		{
			if (_putchar(*iformat) < 0)
				return (-1);
			len++;
		}
		iformat++;
	}
	va_end(ap);
	return (len);
}

/**
 * format_handle - Handles the formatting in string
 * @str: Point of format specifier
 * @ap: Next argument pointed by va_list
 *
 * Return: Length of string printed
 * -1 if error occurs.
 */
int format_handle(const char *str, va_list ap)
{
	int flen, len = 0;
	const char *iformat = str;

	switch (*iformat)
	{
	case 'c':
		if (_putchar(va_arg(ap, int)) < 0)
			return (-1);
		len++;
		break;
	case 's':
		flen = print_str(va_arg(ap, char *));
		if (flen < 0)
			return (-1);
		len += flen;
		break;
	case '%':
		if (_putchar('%') < 0)
			return (-1);
		len++;
		break;
	default:
		break;
	}

	return (len);
}
