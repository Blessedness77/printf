#include "main.h"

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
