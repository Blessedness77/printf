#include "main.h"

/**
 * print_char - Called when format specifies is c.
 * @ap: va_list variable
 *
 * Return: 1 on success
 * -1 on failure
 */
int print_char(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
 * print_asis - Called when format specifier is %
 * @ap: va_list variable
 *
 * Return: 1 on success
 * -1 on failure
 */
int print_asis(__attribute__((unused)) va_list ap)
{
	return (_putchar('%'));
}

/**
 * _putchar - Prints one character at a time
 * @c: Character to print
 *
 * Return: 1 on success
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
