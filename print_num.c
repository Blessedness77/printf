#include "main.h"

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
