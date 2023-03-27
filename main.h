#ifndef MAIN_H
#define MAIN_H

#include "unistd.h"
#include "stdarg.h"

/**
 * struct format_specifier - Defines a format specifier
 * @fspec: Character representation of format specifier
 * @print_func: Corresponding handling function
 *
 * Description: Stores format specifier with corresponding Handling functon
 */
struct format_specifier
{
	char fspec;
	int (*print_func)(va_list ap);
};

/**
 * specifier - Typedef for struct format_specifier
 */
typedef struct format_specifier specifier;

int print_char(va_list);
int print_string(va_list);
int print_dec(va_list);
int print_bin(va_list);
int print_asis(va_list);

int _putchar(char);
int print_str(const char *);
int _printf(const char *, ...);
int format_handle(const char *, va_list);
int print_num(long int);
long int dec2bin(int);

#endif /* MAIN_H */
