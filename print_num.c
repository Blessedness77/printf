#include "main.h"

/**
 * print_dec - Called when format specifier is d or i
 * @ap: va_list variable
 *
 * Return: Number of digits printed
 * -1 if error occurs
 */
int print_dec(va_list ap)
{
	int flen;

	flen = print_num(va_arg(ap, int));
	if (flen < 0)
		return (-1);
	return (flen);
}

/**
 * print_bin - Called when format specifier is b and prints binary conversion
 * @ap: va_list variable
 *
 * Return: Number of digits printed
 * -1 if error occurs
 */
int print_bin(va_list ap)
{
	int flen, decval, binval;

	decval = va_arg(ap, int);

	binval = dec2bin(decval);

	flen = print_num(binval);
	if (flen < 0)
		return (-1);
	return (flen);
}

/**
 * print_num - prints an integer
 * @n: integer
 * Return: lenth of string printed
 * -1 if error
 */
int print_num(int n)
{
	 unsigned int n1;
	 int len = 0, flen;

	if (n < 0)
	{
		n1 = -n;
		if (_putchar('-') < 0)
			return (-1);
		len++;
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		flen = print_num(n1 / 10);
		if (flen < 0)
			return (-1);
		len += flen;
	}
	if (_putchar((n1 % 10) + '0') < 0)
		return (-1);
	len++;
	return (len);
}
